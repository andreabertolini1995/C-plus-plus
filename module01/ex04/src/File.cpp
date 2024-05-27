#include "../include/File.hpp"

File::File(std::string name): _fileName(name) {}

File::~File() {}

void File::replaceOccurences(std::string s1, std::string s2) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}