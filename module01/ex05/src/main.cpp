#include "../include/Harl.hpp"

int main() {
    Harl harl;

    // Debug
    harl.complain(DEBUG);

    // Info
    harl.complain(INFO);

    // Warning
    harl.complain(WARNING);

    // Error
    harl.complain(ERROR);

    // Invalid complain level
    harl.complain("other");
}
