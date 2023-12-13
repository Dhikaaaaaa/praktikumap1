#include <iostream>
#include <string>

const int NUM_ITEMS = 10;

int main() {
    // Definisikan variabel dan tipe data
    std::string itemNames[NUM_ITEMS];
    double itemPrices[NUM_ITEMS];
    int itemQuantities[NUM_ITEMS];

    // Input data harga setiap item barang (konstanta)
    itemNames[0] = "Item 1";
    itemPrices[0] = 5000;

    itemNames[1] = "Item 2";
    itemPrices[1] = 6000;

    itemNames[2] = "Item 3";
    itemPrices[2] = 15000;

    // Input jumlah terjual untuk setiap item barang
    for (int i = 0; i < NUM_ITEMS; ++i) {
        std::cout << "Masukkan jumlah terjual untuk " << itemNames[i] << ": ";
        std::cin >> itemQuantities[i];
    }

    // Hitung total penjualan Minimarket setiap harinya
    double totalSales = 0;
    for (int i = 0; i < NUM_ITEMS; ++i) {
        double totalPerItem = itemPrices[i] * itemQuantities[i];
        totalSales += totalPerItem;

        std::cout << "Total penjualan untuk " << itemNames[i] << ": Rp. " << totalPerItem << std::endl;
    }

    // Temukan item yang paling banyak terjual (laku)
    int maxIndex = 0;
    for (int i = 1; i < NUM_ITEMS; ++i) {
        if (itemQuantities[i] > itemQuantities[maxIndex]) {
            maxIndex = i;
        }
    }

    // Menampilkan hasil
    std::cout << "Total penjualan Minimarket setiap harinya: Rp. " << totalSales << std::endl;
    std::cout << "Item yang paling laku adalah " << itemNames[maxIndex] << " (Item " << maxIndex + 1 << ")" << std::endl;

    return 0;
}
