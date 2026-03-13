#include "cripto.h"
#include <iostream>
#include <map>

__FileOperator__::__FileOperator__(std::string auxText) {
    text = auxText;
}

void __FileOperator__::__CheckFrequency__() {
    std::cout << "Frecventa caracterelor:" << std::endl;
    std::map<char, int> frequency_map;

    for (const auto ch : text) {
        frequency_map[ch]++;
    }

    for (const auto it : frequency_map) {
        std::cout << it.first << ":" << it.second << std::endl;
    }
}