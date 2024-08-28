#include <iostream>
#include <array>

int findSmallest(int** array, int size) {
    int smallest = **array;
    for (int i = 1; i < size; i++) {
        if (*(*array + i) < smallest) {
            smallest = *(*array + i);
        }
    }
    return smallest;
}

int main() {
    int size;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> size;

    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Entrez la valeur " << i + 1 << " : ";
        std::cin >> array[i];
    }

    int smallest = findSmallest(&array, size);
    std::cout << "Le plus petit element du tableau est " << smallest << std::endl;
    delete[] array;
    return 0;
}