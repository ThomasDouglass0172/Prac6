#include "Rearrange.h"

using namespace std; 

Individual* Rearrange::mutate(Individual* offspring, int k){
    int length = offspring->getLength(); 
    string result = offspring->getString(); 
    k=k%length; 
    if (k==0){
        k=length; 
    }
string cut = result.substr (k-1); 
for (int i=0; i<length-(k-1); i++){
result.pop_back();
}

result = cut+result; 
offspring=new Individual(result); 


return offspring; 

}
