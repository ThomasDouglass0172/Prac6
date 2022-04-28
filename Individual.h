#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H 
#include <string> 


class Individial{

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
    int lengthDNA; 
    int pos; 

    std::string binaryString;



};
#endif