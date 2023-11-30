#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap the found maximum element with the element at index i
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(data) / sizeof(data[0]);

    std::cout << "Data sebelum diurutkan: ";
    printArray(data, n);

    selectionSort(data, n);

    std::cout << "Data setelah diurutkan secara menurun: ";
    printArray(data, n);

    return 0;
}
