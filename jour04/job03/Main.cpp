#include "Box.hpp"

int main() {
    Box<int> box(42);
    std::cout << box.getData() << std::endl;

    int a = 21;
    int* ptr = &a;

    Box<int*> box2(ptr);

    std::cout << box2.getData() << std::endl;

    
    return 0;
}