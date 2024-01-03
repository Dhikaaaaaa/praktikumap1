#include <algorithm>
#include <iostream>

using namespace std;

struct Child {
  string name;
  int day, month, year;
};

bool compareByYear(const Child &a, const Child &b) { return a.year < b.year; }

int main() {
  const int maxData = 5;
  Child children[maxData];

  for (int i = 0; i < maxData; ++i) {
    cout << "Masukkan nama anak: ";
    cin >> children[i].name;

    cout << "Masukan tanggal lahir (hari bulan tahun): ";
    cin >> children[i].day >> children[i].month >> children[i].year;
  }

  cout << "\nData sebelum diurutkan:\n";
  for (int i = 0; i < maxData; ++i) {
    cout << children[i].name << " - " << children[i].day << "/"
         << children[i].month << "/" << children[i].year << endl;
  }

  sort(children, children + maxData, compareByYear);

  cout << "\nData setelah diurutkan berdasarkan tahun lahir:\n";
  for (int i = 0; i < maxData; ++i) {
    cout << children[i].name << " - " << children[i].day << "/"
         << children[i].month << "/" << children[i].year << endl;
  }

  cout << "\nData anak yang tahun lahirnya 2020:\n";
  for (int i = 0; i < maxData; ++i) {
    if (children[i].year == 2020) {
      cout << children[i].name << " - " << children[i].day << "/"
           << children[i].month << "/" << children[i].year << endl;
    }
  }

  return 0;
}
