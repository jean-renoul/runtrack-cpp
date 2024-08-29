#include "pingouin.hpp"
#include <iostream>

std::vector<std::shared_ptr<pingouin>> pingouin::colonie;

int main() {
    std::shared_ptr<pingouin> p1 = std::make_shared<pingouin>(1.2, 0.8, 2.5, "Richard");
    std::shared_ptr<pingouin> p2 = std::make_shared<pingouin>(1.5, 1.0, 2.8, "Robert");
    std::shared_ptr<pingouin> p3 = std::make_shared<pingouin>(1.0, 0.7, 2.2, "Elizabeth");


    pingouin::course(pingouin::colonie);

    return 0;
}