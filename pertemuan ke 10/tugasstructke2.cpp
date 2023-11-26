#include <iostream>
#include <cmath>

struct Titik {
    double x;
    double y;
};

double hitungJarak(const Titik& titik1, const Titik& titik2) {
    return sqrt(pow(titik2.x - titik1.x, 2) + pow(titik2.y - titik1.y, 2));
}

int main() {
    Titik titik1, titik2;

    std::cout << "Masukkan koordinat titik 1 (x y): ";
    std::cin >> titik1.x >> titik1.y;

    std::cout << "Masukkan koordinat titik 2 (x y): ";
    std::cin >> titik2.x >> titik2.y;

    double jarak = hitungJarak(titik1, titik2);

    std::cout << "Jarak antara dua titik adalah: " << jarak << std::endl;

    return 0;
}
