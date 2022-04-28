#include "Individual.h"
#include <bitset>
#include <iostream> 
#include <string>
#include <cmath>
using namespace std; 



    Individual::Individual(){
    }

    Individual::Individual(int lengthDNA){
        string binStr (lengthDNA, 0);
        this->binaryString= binStr;  
    }


    Individual::Individual(string InputBinaryString){
    this->binaryString=InputBinaryString; 
    }


    string Individual::getString(){ //The function outputs a binary string representation of the bitstring list (e.g.“01010100”)
    return binaryString; 
    }


    int Individual::getBit(int pos){ //The function returns the bit value at position pos. It should return -1 if pos is out of bound..
    
    if ( pos<0 || getLength()<=pos){
        return -1; 
    }
    return binaryString[pos]-48; 
    }


    void Individual::flipBit(int pos){ // The function takes in the position of the certain bit and flip the bit value.
    if (binaryString[pos]=='1'){
        binaryString[pos]='0'; 
        return; 
    }
    if (binaryString[pos]=='0'){
      binaryString[pos]='1'; 
    return;  
    }
    return; 
    } 


    int Individual::getMaxOnes(){ //The function returns the longest consecutive sequence of ‘1’ digits in the list
    // (e.g. calling the function on “1001110” will obtain 3).
    int binary= stoi(binaryString); 
    int MaxSequence=0; 
    int sequence=0; 
    for (int i=0; i<=getLength(); i++){
        int binary_at_pos= int(binary/pow(10, getLength()-i)) %10;
        if (binary_at_pos==1){
            sequence++; 
        }
        if (binary_at_pos==0 || i==(getLength())){
           if (MaxSequence<sequence){
               MaxSequence=sequence;
            }
           sequence=0; 
            }
    }
    return MaxSequence;
    }


    int Individual::getLength(){ //The function returns the length of the list.
        int lengthDNA=binaryString.length();
        return lengthDNA; 
    } 
    Individual::~Individual(){
    
    }
