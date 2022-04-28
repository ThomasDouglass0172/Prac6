#include "Individual.h"
#include <bitset>
#include <iostream> 
#include <string>
using namespace std; 



    Individual::Individual(){
        this->binaryString=0;
    }
    Individual::Individual(int lengthDNA){
        this->binaryString=bitset<lengthDNA>(0).to_string();
    }
    Individual::Individual(string InputBinaryString){
    //this->binaryString=binaryString.assign(InputBinaryString.begin(),InputBinaryString.end());  //sets the binary string to the input. (copied so it should have different address)
    this->binaryString=InputBinaryString; 
    }

    string Individual::getString(){ //The function outputs a binary string representation of the bitstring list (e.g.“01010100”)
        return binaryString; 
    }

    int Individual::getBit(int pos){ //The function returns the bit value at position pos. It should return -1 if pos is out of bound..
    if ( pos<0 || (binary.length()-1)<pos){
        return -1; 
    }
    return binaryString[pos]; 
    }


    void Individual::flipBit(int pos){ // The function takes in the position of the certain bit and flip the bit value.
    if (binaryString[pos]==1){
        binaryString[pos]=0; 
        return; 
    }
    if (binaryString[pos]==0){
      binaryString[pos]=1; 
    return;  
    }
    cout<<"failed flipBit"<<endl;
    return; 
    } 

    int Individual::getMaxOnes(){ //The function returns the longest consecutive sequence of ‘1’ digits in the list
    // (e.g. calling the function on “1001110” will obtain 3).
    int binary= stoi(binaryString); 
    int MaxSequence=0; 
    int sequence=0; 
    for (int i=0; i<=binaryString.length(); i++){
        int binary_at_pos= int(binary/pow(10, binaryString.length()-i)) %10;
        if (binary_at_pos==1){
            sequence++; 
        }
        if (binary_at_pos==0 || i==(binaryString.length())){
           if (MaxSequence<sequence){
               MaxSequence=sequence;
            }
           sequence=0; 
            }
    }
    return MaxSequence;
    }


    int Individual::getLength(){ //The function returns the length of the list.
        lengthDNA=binaryString.length();
        return lengthDNA; 
    } 
