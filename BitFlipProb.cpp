#include "BitFlipProb.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; 

BitFlipProb(int p){  //p is the probability that each of the bits will flip when the mutate function is called. 
this->p=p; 
}

Individual BitFlipProb::Mutate(Individual, int k){

int length = Individual.getLength(); 
double randomNumber;
for (int i=0; i<length; i++){

    srand((unsigned) time(0));  
    randomNumber = ((rand() % 10) + 1)/10;

    if (randomNumber>=p){
        Individual.FlipBit(i); 
    }
}

return Individual; 
}