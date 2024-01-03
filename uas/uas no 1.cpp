#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string encryptPassword(const string& password) {
    if (password.length() != 8) {
        return "Password harus terdiri dari 8 karakter";
    }

    // Membuat kamus konversi huruf
    map<char, char> letterConversion;
    for (char c = 'a'; c <= 'z'; c++) {
        letterConversion[c] = static_cast<char>((c - 'a' + 2) % 26 + 'a');
        letterConversion[toupper(c)] = static_cast<char>((c - 'a' + 2) % 26 + 'A');
    }

    string encryptedPassword = "";

    for (char c : password) {
        if (isalpha(c)) {
            encryptedPassword += letterConversion[c];
        } else if (isdigit(c)) {
            int digit = c - '0';
            encryptedPassword += to_string(digit * 2);
        } else {
            return "Password hanya boleh terdiri dari huruf dan angka";
        }
    }

    return encryptedPassword;
}

int main() {
    cout << "Selamat datang di program enkripsi password!" << endl;

    string password;
    do {
        cout << "Masukkan password (8 karakter, tanpa spasi): ";
        cin >> password;

        if (password.length() != 8) {
            cout << "Password harus terdiri dari 8 karakter. Coba lagi." << endl;
        }
    } while (password.length() != 8);

    string encryptedPassword = encryptPassword(password);

    cout << "Password yang diinput: " << password << endl;
    cout << "Password yang tersimpan: " << encryptedPassword << endl;

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}