#include "cripto.h"

bool __FileOperator__::readFromFile(const std::string& inputFilePath) {
    std::ifstream file(inputFilePath);

    if (!file.is_open()) {
        std::cerr << "Error: Nu s-a putut accesa fisierul: " << inputFilePath << std::endl;
        return false;
    }

    frequency_map.clear();
    char ch;

    while (file.get(ch)) {
        frequency_map[ch]++;
    }

    file.close();
    return true;
}

bool __FileOperator__::writeFrequencyToFile(const std::string& outputFilePath) {
    std::ofstream file(outputFilePath);

    if (!file.is_open()) {
        std::cerr << "Error: Nu s-a putu deschide sau crea fisierul: " << outputFilePath << std::endl; 
    }

    file << "Frecventa caracterelor este:\n";
    file << "----------------------------\n";

    for (const auto& pair : frequency_map) {
        file << pair.first << " : " << pair.second << std::endl;
    }

    file.close();
    return true;
}