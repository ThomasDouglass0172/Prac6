#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"


class Mutator: public Individual{

    public:
    virtual Individual* mutate(Individual* offspring, int k)=0;  
};
#endif