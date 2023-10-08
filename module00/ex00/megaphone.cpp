
#include <iostream>
using namespace std;

void printUppercaseString(int argc, char **str) {
    
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(str[i]); j++) {
            cout << (char)(toupper(str[i][j])) << "";
        }
    }
    cout << endl;
}

int main(int argc, char **argv) {
    
    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
        printUppercaseString(argc, argv);
    return 0;
}
