#include "Rearrange.h"
#include "Individual.h"
#include <iostream>

using namespace std; 

Individual* Rearrange::mutate(Individual* offspring, int k){
    int length = offspring->getLength(); 
string cut = offspring->binaryString.substr (k-1); 
for (int i=0; i<length-(k-1); i++){
offspring->binaryString.pop_back();
}

string print = offspring->getString();
cout<<"the print prior is "<<print<<" and the cut is "<<cut<<endl;

offspring->binaryString=cut+(offspring->binaryString); 

print = offspring->getString();
cout<<"the print is "<<print<<endl;


return offspring; 

}
