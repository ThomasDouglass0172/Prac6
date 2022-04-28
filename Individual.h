#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H 
#include <string> 


class Individual{

    public:
    Individual(); 
    Individual(int lengthDNA);
    Individual(std::string binaryString);
    std::string getString();
    int getBit(int pos); 
    void flipBit(int pos); 
    int getMaxOnes();
    int getLength(); 
    ~Individual();
    
    private:
    std::string binaryString;
    



};
#endif