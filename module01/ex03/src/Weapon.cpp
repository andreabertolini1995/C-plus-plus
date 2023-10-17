#include "../include/Weapon.hpp"

Weapon::Weapon(string type): type(type) {}

Weapon::~Weapon() {}

const string& Weapon::getType() {
    return this->type;
}

void Weapon::setType(string type) {
    this->type = type;
}