#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double dollars = 12000.0;
    double euros = 20000.0;
    double usdToIDR = 15000.0;
    double eurToUSD = 0.997;
    double hargaMobil = 425000000.0;

    double totalDalamUSD = dollars + euros * eurToUSD;
    double totalDalamIDR = totalDalamUSD * usdToIDR;
    double sisaUang = totalDalamIDR - hargaMobil;

    cout << "===================================" << endl;
    cout << "Selamat datang di Program Perhitungan Dana Pak Anto untuk Membeli Mobil!" << endl;
    cout << "===================================" << endl;

    cout << "Tabungan Pak Anto dalam mata uang asing:" << endl;
    cout << "Dollar: $" << fixed << setprecision(2) << dollars << endl;
    cout << "Euro: €" << fixed << setprecision(2) << euros << endl;

    cout << "Kurs mata uang yang berlaku:" << endl;
    cout << "1 US Dollar = Rp. 15,000" << endl;
    cout << "1 Euro = 0.997 US Dollar" << endl;

    cout << "===================================" << endl;
    cout << "Total tabungan dalam mata uang asing: $" << totalDalamUSD << " (Rp. " << totalDalamIDR << ")" << endl;
    cout << "===================================" << endl;
    cout << "Harga mobil baru: Rp. " << fixed << setprecision(0) << hargaMobil << endl;
    cout << "===================================" << endl;

    if (sisaUang >= 0) {
        cout << "Pak Anto memiliki dana mencukupi untuk membeli mobil tersebut!" << endl;
        cout << "Sisa uang Pak Anto setelah membeli mobil: Rp. " << fixed << setprecision(0) << sisaUang << endl;
    } else {
        cout << "Maaf, uang Pak Anto tidak mencukupi untuk membeli mobil tersebut." << endl;
        cout << "Pak Anto memerlukan tambahan dana sebesar Rp. " << fixed << setprecision(0) << -sisaUang << " lagi." << endl;
    }

    cout << "===================================" << endl;
    cout << "Terima kasih telah menggunakan Program Perhitungan Dana Pak Anto untuk Membeli Mobil!" << endl;
    cout << "===================================" << endl;

    return 0;
}

