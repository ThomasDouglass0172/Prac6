#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <string> 


class Mutator: public Individial{

    public:
    virtual Individual mutate(Individual, int k);  
};
#endif