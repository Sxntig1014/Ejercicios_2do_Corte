#include <string>
#include <unordered_map>

class Spreadsheet {
public:
    std::unordered_map<std::string, int> celda;

    Spreadsheet(int rows) {
    }
    
    void setCell(std::string cell, int value) {
        celda[cell] = value;
    }
    
    void resetCell(std::string cell) {
        celda[cell] = 0;
    }
    
    int getValue(std::string formula) {
        int posMas = formula.find('+');
        std::string parteX = formula.substr(1, posMas - 1);
        std::string parteY = formula.substr(posMas + 1);
        
        int valorX = 0;
        if (parteX[0] >= 'A' && parteX[0] <= 'Z') {
            if (celda.count(parteX)) {
                valorX = celda[parteX];
            }
        } else {
            valorX = std::stoi(parteX);
        }
        
        int valorY = 0;
        if (parteY[0] >= 'A' && parteY[0] <= 'Z') {
            if (celda.count(parteY)) {
                valorY = celda[parteY];
            }
        } else {
            valorY = std::stoi(parteY);
        }
        
        return valorX + valorY;
    }
};
