#include "Rearrange.h"

using namespace std; 

Individual Rearrange::Mutate(Individual, int k){

int length = Individial.getLength(); 
individual->binaryString.insert(0,binaryString,k,(getLength-k))
for (int i=0; i<(getLength-k);i++){
    individual->binaryString.popback(); 
}

return Individual; 
}