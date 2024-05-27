#include "../include/Replace.hpp"

void createFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename.c_str());
    file << content; // write content to a file
    file.close();
}

std::string readFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    std::string content((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));
    return content;
}

void runTest(const std::string& inputFileName, const std::string& expectedOutputFileName, const std::string& s1, const std::string& s2) {
    std::string outputFileName = inputFileName + ".replace";
    std::string expectedOutput = readFile(expectedOutputFileName);

    char* args[] = { (char*)"program_name", (char*)inputFileName.c_str(), (char*)s1.c_str(), (char*)s2.c_str() };
    replaceOccurencesInFile(4, args);

    std::string output = readFile(outputFileName);

    std::cout << output << std::endl;
    std::cout << expectedOutput << std::endl;

    assert(output == expectedOutput);
}

int test() {
    
    createFile("test1.txt", "Hello Andrea");
    createFile("testExpectedOutput1", "Bye Andrea");

    createFile("test2.txt", "Hi how are you today?");
    createFile("testExpectedOutput2", "Hi how are you tomorrow?");

    runTest("test1.txt", "testExpectedOutput1", "Hello", "Bye");
    runTest("test2.txt", "testExpectedOutput2", "today", "tomorrow");

    std::cout << "All tests passed!" << std::endl;
    return (EXIT_SUCCESS);
}
