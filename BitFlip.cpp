#include "BitFlip.h"

using namespace std; 

Individual* BitFlip::mutate(Individual* offspring, int k){


int length = offspring->getLength(); 
int lengthTest=0; 
k--; 
while (lengthTest==0){
    if (k>=length){
        k-=length; 
    }
    if (k<length){
        lengthTest++; 
    }
}

offspring->flipBit(k); 
return offspring; 
}