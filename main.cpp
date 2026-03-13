//for the header test
#include "cripto.h"
#include <iostream>
#include <fstream>
#include <string>

int main() {
    bool text_shown = false;

    std::string target;
    std::cin >> target;

    std::ifstream fin(target + ".txt");
    std::ofstream fout("results.txt");

    if (!fin.is_open()) {
        std::cerr << "Error, unable to open/find file" << std::endl;
        return 1;
    }

    std::string s;
    std::getline(fin, s);
    
    std::map<char, int> myMap;

    __FileOperator__ test(s);
    myMap = test.__CheckFrequency__();
    fout << "Frecventa caracterelor este:" << std::endl;
    for (const auto it : myMap) {
        fout << it.first << ":" << it.second << std::endl;
    }

    fin.close();
    fout.close();
    return 0;
}