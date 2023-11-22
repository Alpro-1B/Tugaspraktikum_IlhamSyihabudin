#include <iostream>

int main() {
    const int size = 6;
    int array[size] = {80, 75, 90, 54, 100, 95};

    // Mencari nilai tertinggi dalam array
    int max = array[0];
    int index = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    // Menampilkan hasil
    std :: cout << "Nilai tertinggi dalam array: " << max << std::endl;

    if (index != -1) {
     std :: cout << "Nilai tersebut ditemukan pada indeks: " << index << std::endl;
    } else {
      std ::  cout << "Nilai tersebut tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
