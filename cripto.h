#pragma once

#include <fstream>
#include <map>

class __FileOperator__ {
    private:
        std::string text;
    public:
        __FileOperator__ (std::string auxText);
        std::map<char, int> __CheckFrequency__();
};