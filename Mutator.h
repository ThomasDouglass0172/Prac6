#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <string> 


class Mutator: public Individual{

    public:
    virtual Individual mutate(Individual, int k)=0;  
};
#endif