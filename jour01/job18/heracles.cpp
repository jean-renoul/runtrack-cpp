#include <iostream>

void addElement(int*& array, int& size, int element) {
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }

    newArray[size] = element;

    delete[] array;

    array = newArray;

    size++;
}

void showTable(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }
}

int main() {
    int size = 0;
    int capacity = 5;
    int* array = new int[capacity];

    addElement(array, size, 10);
    addElement(array, size, 20);
    addElement(array, size, 30);
    addElement(array, size, 40);
    addElement(array, size, 50);

    std::cout << "After adding element:" << std::endl;
    showTable(array, size);

    delete[] array;

    return 0;
}

    