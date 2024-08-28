#include <iostream>

int swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main() {
    int a, b;
    std::cout << "Entrez un premier nombre : ";
    std::cin >> a;
    std::cout << "Entrez un deuxieme nombre : ";
    std::cin >> b;
    swapValues(a, b);
    std::cout << "Le premier nombre est " << a << " et le deuxieme nombre est " << b << std::endl;
    return 0;
}