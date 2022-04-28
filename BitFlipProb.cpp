#include "BitFlipProb.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Individual.h"

using namespace std; 

BitFlipProb::BitFlipProb(double p){  //p is the probability that each of the bits will flip when the mutate function is called. 
if (p<0 || p>1){
    p=0;
}
this->p=p; 
}

Individual* BitFlipProb::mutate(Individual* offspring, int k){ 
int length = offspring->getLength(); 
double randomNumber;
for (int i=0; i<length; i++){

    srand((unsigned) time(0));  
    randomNumber = ((rand() % 10) + 1)/10;

    if (randomNumber>=p){
        offspring->flipBit(i); 
    }
}

return offspring; 
}