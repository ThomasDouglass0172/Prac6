#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator{

public: 
BitFlipProb(int p); 
Individual Mutate(Individual, int k); 
private: 
double p; 
};
#endif 