#include "Rearrange.h"
#include "Individual.h"

using namespace std; 

Individual* Rearrange::mutate(Individual* offspring, int k){
int length = offspring->getLength(); 
offspring->binaryString.insert(0,binaryString,k,(length-k));
for (int i=0; i<(length-k); i++){
    offspring->binaryString.pop_back(); 
}

return offspring; 
}