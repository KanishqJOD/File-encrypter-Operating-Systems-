#include<iostream>
#include "IO.hpp"
#include<fstream>
using namespace std;
IO::IO(const string&file_path) {
    file_stream.open(file_path,std::ios::in | std::ios::out | std::ios::binary);
    if(!file_stream.is_open()) {
        std::cout << "Unable to open the file: " << file_path << std::endl;
    }
}

// this above will open the file and store the things in private variable that we made in I/O

fstream IO::getFileStream(){
    return std::move(file_stream);
}  // jo filestream own karti hai apni class wo return karin hai


IO::~IO(){
    if(file_stream.is_open()) {
        file_stream.close();
    }
}

