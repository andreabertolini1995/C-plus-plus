#include "../include/Replace.hpp"

static void replaceOccurence(std::string s1, std::string s2, std::ofstream& newFile, std::string line) {
    
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

    if (argc != 4) {
        std::cout << "Please insert three arguments: a filename and two strings." << std::endl;
        return (EXIT_FAILURE);
    }
    else
    {
        std::ifstream    myFile;
        std::ofstream    newFile;
        std::string      s1, s2, fileName, newFileName, line;

        fileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        
        myFile.open(fileName.c_str());
        newFileName = fileName.append(".replace");
        newFile.open(newFileName.c_str());

        while (getline(myFile, line))
            replaceOccurence(s1, s2, newFile, line);
        myFile.close();
        newFile.close();
        return (EXIT_SUCCESS);
    }
}
