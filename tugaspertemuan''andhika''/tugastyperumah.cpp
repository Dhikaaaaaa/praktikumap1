#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  string namaKaryawan;
  int tipe, terjual, bonus;

  cout << "nama karyawan: ";
  cin >> namaKaryawan;
  cout << "Masukan tipe rumah: ";
  cin >> tipe;
  cout << "Masukan total rumah terjual: ";
  cin >> terjual;

  if (tipe == 45 || tipe == 54 || tipe == 70) {

    if (tipe == 45) {
      if (5 >= terjual >= 1) {
        bonus = 250000;
      } else if (terjual > 5) {
        bonus = 500000;
      }
    } else if (tipe == 54) {
      if (5 >= terjual >= 1) {
        bonus = 500000;
      } else if (terjual > 5) {
        bonus = 1000000;
      }
    } else if (tipe == 70) {
      if (5 >= terjual >= 1) {
        bonus = 1000000;
      } else if (terjual > 5) {
        bonus = 1250000;
      }
    }

    double total = bonus * terjual;

    cout << fixed << showpoint << setprecision(2);
    cout << "nama karyawan :" << namaKaryawan << endl;
    cout << "Tipe rumah: " << tipe << endl;
    cout << "Jumlah rumah terjual: " << terjual << endl;
    cout << "Bonus yang diterima: " << total;
  } else {
    cout << "Tipe rumah tidak ada";
  }

  return 0;
}