#include "BitFlip.h"

using namespace std; 

Individual BitFlip::Mutate(Individual, int k){

int length = Individial.getLength(); 
int lengthTest=0; 
while (lengthTest==0){
    if (k>=length){
        k-=length; 
    }
    if (k<length){
        lengthTest++; 
    }
}

Individual.flipbit(k); 
//if this flips the wrong bit change k to 'k-1' and put the equals on the other if statement
return Individual; 
}