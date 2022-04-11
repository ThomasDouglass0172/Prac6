#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H 
#include <string> 

class Individial{
    private:
    std::string binaryString; 
    public:
    Individual();
    Individual(DNA);
    std::string getString();
    int getBit(int pos); 
    void flipBit(int pos); 
    int getMaxOnes();
    int getLength(); 



};
#endif