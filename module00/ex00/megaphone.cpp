#include <iostream>
#include <cstring>

void printUppercaseString(int argc, char **str) {
    
    for (int i = 1; i < argc; i++) {
        for (size_t j = 0; j < strlen(str[i]); j++) {
            std::cout << (char)(toupper(str[i][j])) << "";
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        printUppercaseString(argc, argv);
    return 0;
}
