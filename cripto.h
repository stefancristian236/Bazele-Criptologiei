#pragma once

#include <fstream>
#include <map>
#include <string>
#include <iostream>

class __FileOperator__ {
    private:
        std::map<char, int> frequency_map;
    public:
        __FileOperator__() = default;

        bool readFromFile(const std::string& inputFilePath);

        bool writeFrequencyToFile(const std::string& outputFilePath);
};