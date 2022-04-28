#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include "Mutator.h"
#include "Individual.h"
#include <string> 
#include <iostream> 

using namespace std; 
 
    Individual* execute(Individual* indPtr, Mutator * mPtr, int k){
   indPtr=mPtr->mutate(indPtr , k); 
    return indPtr; 

}

int main(){

//string binarystr1, int k1, string binarystr2, int k2
    
    
    //takes in one line of input: binarystr1 k1 binarystr2 k2
    
    string binarystr1;
    string binarystr2; 
    int k1; 
    int k2; 

    cin>> binarystr1;
    cin>>k1;
    cin>>binarystr2; 
    cin>>k2; 

Individual Ind1(binarystr1);
Individual Ind2(binarystr2); 
BitFlip bf; 
Mutator* m1; 
m1=&bf;
Individual* p1; 
p1=&Ind1; 
Rearrange r; 
Mutator* m2; 
m2=&r;
Individual* p2; 
p2=&Ind2; 

//first individual is bitflip
p1=execute(p1, m1, k1 );

//second individual is rearrange

p2= execute(p2, m2, k2 );

int sequenceMax1 = p1->getMaxOnes(); 

int sequenceMax2 = p2->getMaxOnes(); 
int Maxsequence; 
if (sequenceMax1>=sequenceMax2){
    Maxsequence=sequenceMax1; 
}
if(sequenceMax2>sequenceMax1){
    Maxsequence=sequenceMax2; 
}




string BinStr1 = p1->getString(); 
string BinStr2 = p2->getString(); 

cout<<BinStr1<<" "<<BinStr2<<" "<<Maxsequence<<endl;

// int length= Ind1.getLength(); 
// string str = Ind1. getString(); 
// int Max = Ind1.getMaxOnes(); 


// for (int i=0; i<length; i++){
//     int value = Ind1.getBit(i); 
//     cout<<value<<" "; 
//     Ind1.flipBit(i);
// }
// cout<<endl;

// for (int i=0; i<length; i++){
//     int value = Ind1.getBit(i); 
//     cout<<value<<" "; 
// }
// cout<<endl;


// cout<<"the length is "<<length<< " and the string is "<< str<< " and the max ones is "<<Max<<endl;

return 0;   
}

