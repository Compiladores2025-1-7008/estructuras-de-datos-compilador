#pragma once
#include <string>

class CodeGenerator {
private:
    int nextTemp = 0;
    int nextLabel = 0;

public:
    std::string newTemp();

    std::string newLabel() ;

    void reset() ;
};
