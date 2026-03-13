#include <iostream>
#include <string>
#include "cripto.h"

int main() {
    std::string inputFile, outputFile;

    std::cout << "Introduceti path-ul catre fisierul sursa ";
    std::getline(std::cin, inputFile);

    std::cout << "Introduceti path-ul catre fisierul destinatie ";
    std::getline(std::cin, outputFile);

    __FileOperator__ fileOp;

    std::cout << "Se proceseaza...\n";
    
    if (fileOp.readFromFile(inputFile)) {
        if (fileOp.writeFrequencyToFile(outputFile)) {
            std::cout << "Succes! Rezultatele au fost salvate in: " << outputFile << std::endl;
        }
    }

    return 0;
}