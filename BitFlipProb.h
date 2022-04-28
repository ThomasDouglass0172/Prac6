#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator{

public: 
BitFlipProb(double p); 
Individual* mutate(Individual* offspring , int k); 
private: 
double p; 
};
#endif 