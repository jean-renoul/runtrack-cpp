#include <iostream>
#include <array>
#include <string>

void sortStrings(std::array<std::string, 4>* strings) {
    for (int i = 0; i < strings->size(); i++) {
        for (int j = 0; j < strings->size() - i - 1; j++) {
            if ((*strings)[j] > (*strings)[j + 1]) {
                std::string temp = (*strings)[j];
                (*strings)[j] = (*strings)[j + 1];
                (*strings)[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::array<std::string, 4> strings = {"banane", "ananas", "zebre", "chien"};
    sortStrings(&strings);

    for (int i = 0; i < strings.size(); i++) {
        std::cout << strings[i] << std::endl;
    }

    return 0;
    
}