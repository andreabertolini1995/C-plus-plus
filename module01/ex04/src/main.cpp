#include "../include/Replace.hpp"

static void replaceOccurence(string s1, string s2, ofstream& newFile, string line) {
    
    size_t pos = 0;
    size_t found;
    
    while (pos < line.length()) {
        found = line.find(s1, pos); // pos of the start of the occurence found
        newFile << line.substr(pos, found - pos);
        if (found <= line.length())
            newFile << s2;
        pos = pos + line.substr(pos, found - pos).length() + s1.length();
    }
    newFile << "\n";
}

int main(int argc, char **argv) {

    if (argc != 4)
        return (1);
    else
    {
        ifstream    myFile;
        ofstream    newFile;
        string      s1, s2, fileName, line;

        fileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        
        myFile.open(fileName);
        newFile.open(fileName + ".replace");

        while (getline(myFile, line))
            replaceOccurence(s1, s2, newFile, line);
        myFile.close();
        newFile.close();
        return 0;
    }
}
