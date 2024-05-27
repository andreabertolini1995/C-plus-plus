#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include "Replace.hpp"

class File {
    private:
        std::string _fileName;

    public:
        File(std::string fileName);
        ~File();
        void replaceOccurences(std::string s1, std::string s2);
};

#endif