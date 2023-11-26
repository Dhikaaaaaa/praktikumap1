#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    const int num_records = 20;
    string kode_brg[num_records];
    string nama_brg[num_records];
    int jumlah[num_records];
    double harga_satuan[num_records];

    // Input data penjualan
    cout << "Input data penjualan:\n";
    for (int i = 0; i < num_records; ++i) {
        cout << "Data ke-" << i + 1 << ":\n";
        cout << "Kode Barang: ";
        cin >> kode_brg[i];
        cout << "Nama Barang: ";
        cin.ignore(); // Untuk menghindari masalah getline setelah cin
        getline(cin, nama_brg[i]);
        cout << "Jumlah: ";
        cin >> jumlah[i];
        cout << "Harga Satuan: Rp.";
        cin >> harga_satuan[i];
        cout << endl;
    }

    // Hitung total harga penjualan
    double total_penjualan = 0.0;
    for (int i = 0; i < num_records; ++i) {
        total_penjualan += jumlah[i] * harga_satuan[i];
    }

    // Hitung keuntungan (10% dari total penjualan)
    double keuntungan = 0.1 * total_penjualan;

    // Tampilkan hasil
    cout << fixed << setprecision(2);
    cout << "\nTotal Harga Penjualan: Rp." << total_penjualan << endl;
    cout << "Keuntungan (10% dari Total Penjualan): Rp." << keuntungan << endl;

    return 0;
}
