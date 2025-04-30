//We create an IO.hpp file to separate the Input/Output (I/O)
// code from the main logic, and to organize the project better.

#ifndef IO_HPP // if we include in multiple classes, it will be compiled only once, all thing go with reference.
#define IO_HPP

#include <fstream>// basically for file reading/writing
#include<string>// for using std:: string
#include<iostream> // for debugging (cout/cerr)


class IO{
    public:
    IO(const std::string&file_path);
    ~IO();
    std::fstream getFileStream();

    private:
    std::fstream file_stream; // this is the real file we will work upon

};
#endif