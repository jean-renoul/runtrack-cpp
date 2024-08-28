#include <iostream>

void echange(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cout << "Entrez un premier nombre : ";
    std::cin >> a;
    std::cout << "Entrez un deuxieme nombre : ";
    std::cin >> b;
    echange(a, b);
    std::cout << "Le premier nombre est " << a << " et le deuxieme nombre est " << b << std::endl;
    return 0;
}