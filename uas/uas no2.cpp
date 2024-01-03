#include <iostream>
#include <algorithm>

using namespace std;

struct Anak {
    string nama;
    int tanggal, bulan, tahun;
};

const int MAX_DATA = 20;

void tampilkanData(const Anak data[], int n) {
    cout << "Data belum terurut:\n";
    for (int i = 0; i < n; ++i) {
        cout << data[i].nama << " - " << data[i].tanggal << "/" << data[i].bulan << "/" << data[i].tahun << "\n";
    }
}

int main() {
    Anak data[MAX_DATA];

    // Pembacaan data secara acak (contoh data)
    for (int i = 0; i < MAX_DATA - 1; ++i) {
        cout << "Masukkan data anak ke-" << i + 1 << ":\n";
        cout << "Nama: ";
        cin >> data[i].nama;
        cout << "Tanggal lahir (DD MM YYYY): ";
        cin >> data[i].tanggal >> data[i].bulan >> data[i].tahun;
        if (i == 19) break; // Hanya membaca 19 data sebelum 2020
    }

    // Menambahkan satu data anak dengan Tahun Lahir 2020
    cout << "Masukkan data anak ke-" << MAX_DATA << " (Tahun Lahir 2020):\n";
    cout << "Nama: ";
    cin >> data[MAX_DATA - 1].nama;
    cout << "Tanggal lahir (DD MM YYYY): ";
    cin >> data[MAX_DATA - 1].tanggal >> data[MAX_DATA - 1].bulan >> data[MAX_DATA - 1].tahun;

    // Urutkan data berdasarkan Tahun Lahir dari yang tertua sampai termuda
    sort(data, data + MAX_DATA, [](const Anak &a, const Anak &b) {
        return a.tahun < b.tahun;
    });

    // Tampilkan data yang belum terurut
    tampilkanData(data, MAX_DATA);

    // Tampilkan data yang sudah terurut
    cout << "\nData sudah terurut:\n";
    tampilkanData(data, MAX_DATA);

    // Cari dan tampilkan data anak yang Tahun Lahirnya 2020
    cout << "\nData anak dengan Tahun Lahir 2020:\n";
    for (int i = 0; i < MAX_DATA; ++i) {
        if (data[i].tahun == 2020) {
            cout << data[i].nama << " - " << data[i].tanggal << "/" << data[i].bulan << "/" << data[i].tahun << "\n";
        }
    }

    return 0;
}
