#ifndef ENNEMYFACTORY_HPP
#define ENNEMYFACTORY_HPP
#include "Dragon.hpp"
#include "Goblin.hpp"
#include "Ogre.hpp"
#include <map>
#include <string>


class EnnemyFactory {
    private:
        std::map<std::string, Ennemy* (*)()> map;

    public:
        EnnemyFactory() {
            this->map["Dragon"] = []() -> Ennemy* { return new Dragon(); };
            this->map["Goblin"] = []() -> Ennemy* { return new Goblin(); };
            this->map["Ogre"] = []() -> Ennemy* { return new Ogre(); };
        }
        Ennemy* createEnnemy(std::string type) {
            return this->map[type]();
        }
};

#endif