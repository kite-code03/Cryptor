#ifndef IO_HPP // if IO_HPP has to be included in classes then it should compile only one time, else other times it will be passed as reference.
#define IO_HPP

#include <fstream>
#include<iostream>
#include <string>

class IO{
    public:
    IO(const std::string &file_path);
    ~IO();
    std::fstream getFileStream();

    private:
    std::fstream file_stream;
};

#endif