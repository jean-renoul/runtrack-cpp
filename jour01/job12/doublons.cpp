#include <iostream>
#include <array>

int doubleArray(int*array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        *(array + i) *= 2;
        sum += *(array + i);
    }
    return sum;
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        *(array + i) *= 2;
        std::cout << *(array + i) << std::endl;
    }
}

int main() {
    int size;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Entrez la valeur " << i + 1 << " : ";
        std::cin >> array[i];
    }

    int sum = doubleArray(array, size);
    std::cout << "La somme des elements du tableau apres doublage est " << sum << std::endl;
    printArray(array, size);
    return 0;
}