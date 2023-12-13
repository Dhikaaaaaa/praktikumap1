#include <iostream>

int main() {
    // Menggunakan variabel bantu
    int X = 10;
    int Y = 23;

    // Penukaran nilai menggunakan variabel bantu
    int temp = X;
    X = Y;
    Y = temp;

    // Menampilkan hasil setelah ditukar
  printf("Setelah ditukar, Nilai X = %d\n", X);
  printf("Setelah ditukar, Nilai Y = %d\n", Y);


    return 0;
}
