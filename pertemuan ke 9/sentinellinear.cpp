#include <iostream>
using namespace std;

// Function to perform linear search with a sentinel
void linearSearchWithSentinel(int array[], int size, int search) {
    // Add a sentinel to the end of the array
    array[size - 1] = search;

    // Perform linear search with a sentinel
    int i = 0;
    while (array[i] != search) {
        i++;
    }

    // Check if the element was found
    if (i < size - 1) {
        cout << "Nilai berada di Index ke-" << i << endl;
    } else {
        cout << "Nilai tidak ditemukan dalam array." << endl;
    }
}

int main() {
    int size;
    int search;

    // Input ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> size;
    cout << "\n";

    const int arraySize = size + 1;  // ukuran array + 1 untuk sentinel
    int array[arraySize];

    // Input elemen-elemen array
    for (int i = 0; i < size; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> array[i];
    }

    // Input nilai yang dicari
    cout << "\nAngka yang dicari: ";
    cin >> search;
    cout << "\n";

    // Panggil fungsi linearSearchWithSentinel
    linearSearchWithSentinel(array, arraySize, search);

    return 0;
}
