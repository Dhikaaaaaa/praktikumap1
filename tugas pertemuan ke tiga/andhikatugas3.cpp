#include <iostream>
using namespace std;

int main() {
    char operasi;
    float angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi) {
        case '+':
            cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
            break;
        case '-':
            cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
            break;
        case '*':
            cout << "Hasil perkalian: " << angka1 * angka2 << endl;
            break;
        case '/':
            if (angka2 != 0)
                cout << "Hasil pembagian: " << angka1 / angka2 << endl;
            else
                cout << "Pembagian oleh nol tidak diperbolehkan." << endl;
            break;
        default:
            cout << "Operasi tidak valid." << endl;
    }

    return 0;
}
