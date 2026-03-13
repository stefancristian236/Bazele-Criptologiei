
#include <vector>
#include <iostream>
#include <fstream>
#include <unordered_map>

class __FileOperator__ {
    private:
        std::string text;
    public:
        __FileOperator__ (std::string auxText) {text = auxText;} //define constructor

        void __CheckFrequency__ () {
            std::cout << "Frecventa caracterelor:" << std::endl;
            std::unordered_map <char, int> frequency_map;
            for (const auto ch : text) {
                frequency_map[ch]++;
            }
            for (const auto it : frequency_map) {
                std::cout << it.first << ":" << it.second << std::endl;
            }
        }
};

int main (){
    std::string test = "a143basdb2";
    __FileOperator__ oper(test);
    oper.__CheckFrequency__();


    return 0;
}