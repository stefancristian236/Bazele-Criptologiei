#include "cripto.h"
#include <iostream>
#include <map>

__FileOperator__::__FileOperator__(std::string auxText) {
    text = auxText;
}

std::map<char, int> __FileOperator__::__CheckFrequency__() {
    std::map<char, int> frequency_map;

    for (const auto ch : text) {
        frequency_map[ch]++;
    }
    return frequency_map;
}