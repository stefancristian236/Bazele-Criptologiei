#pragma once

#include <fstream>

class __FileOperator__ {
    private:
        std::string text;
    public:
        __FileOperator__ (std::string auxText);
        void __CheckFrequency__();
};