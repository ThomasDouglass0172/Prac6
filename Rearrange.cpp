#include "Rearrange.h"

using namespace std; 

Individual* Rearrange::mutate(Individual* offspring, int k){
    int length = offspring->getLength(); 
    k=k%length; 
    if (k=-1){
        k=length; 
    }
string cut = offspring->binaryString.substr (k-1); 
for (int i=0; i<length-(k-1); i++){
offspring->binaryString.pop_back();
}

string print = offspring->getString();

offspring->binaryString=cut+(offspring->binaryString); 



return offspring; 

}
