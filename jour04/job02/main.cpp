#include "Box.hpp"

int main() {
    Box<int> box(42);
    std::cout << box.getData() << std::endl;
    return 0;
}