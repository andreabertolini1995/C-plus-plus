#include "../include/Replace.hpp"

int main(int argc, char **argv) {

    if (argc != 4)
        return (1);
    else {
        ifstream myFile;
        ofstream newFile;
        string fileName = argv[1];
        string s1 = argv[2];
        string s2 = argv[3];

        myFile.open(fileName);
        newFile.open(fileName + ".replace");

        string line;
        bool firstLine = true;
        while (getline(myFile, line))
        {
            size_t pos = 0;
            size_t found;
            if (firstLine == false)
                newFile << "\n";
            while (pos < line.length()) {
                found = line.find(s1, pos); // pos of the start of the occurence found
                newFile << line.substr(pos, found - pos);
                newFile << s2;
                pos = pos + line.substr(pos, found - pos).length() + s1.length() + 1;
            }
            firstLine = false;
        }
        myFile.close();
        newFile.close();
        return 0;
    }
}
