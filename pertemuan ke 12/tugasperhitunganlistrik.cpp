#include <iostream>

int main() {
    // Data penggunaan listrik harian (dalam watt-hour)
    int acUsage = 800;
    int fridgeUsage = 200;
    int ironUsage = 150;
    int washingMachineUsage = 250;
    int lightsUsage = 250;
    int otherUsage = 100;

    // Daya listrik rumah (dalam VA)
    int powerCapacity = 2200;

    // Tarif listrik sesuai daya listrik
    double tariff;
    if (powerCapacity == 900) {
        tariff = 1350;
    } else if (powerCapacity == 1300) {
        tariff = 1440;
    } else if (powerCapacity == 2200) {
        tariff = 1450;
    } else if (powerCapacity == 3500) {
        tariff = 1500;
    } else {
        std::cout << "Daya listrik tidak valid." << std::endl;
        return 1; // Keluar program dengan status error
    }

    // Menghitung total penggunaan listrik harian
    int dailyTotalUsage = acUsage + fridgeUsage + ironUsage + washingMachineUsage + lightsUsage + otherUsage;

    // Menghitung biaya listrik bulanan
    double monthlyCost = (double)dailyTotalUsage / 1000 * tariff * 30; // 30 hari dalam sebulan

    // Menampilkan hasil
    std::cout << "Biaya listrik bulanan: Rp. " << monthlyCost << std::endl;

    return 0;
}
