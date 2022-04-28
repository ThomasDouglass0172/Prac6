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
   cout<<"made it" <<endl;
    return indPtr; 

}

int main(void){

    //takes in one line of input: binarystr1 k1 binarystr2 k2

    string binarystr1;
    string binarystr2; 
    int k1; 
    int k2; 

    cout<<"enter string of numbers: "<<endl;
    cin>> binarystr1;
    cout<<"enter another string of numbers: "<<endl;
    cin>>binarystr2; 

    cout<<"enter a number: "<<endl; 
    cin>>k1; 
    cout<<"enter another number: "<<endl;
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
string BinStr1 = p1->getString(); 
cout<<BinStr1<<endl;
p1= execute(p1, m1, k1 );
BinStr1 = p1->getString(); 
cout<<BinStr1<<endl;
//second individual is rearrange
p2= execute(p2, m2, k2 );
string BinStr2 = p2->getString(); 
cout<<BinStr2<<endl;
p2= execute(p2, m2, k2 );
BinStr2 = p2->getString(); 
cout<<BinStr2<<endl;


cout<<BinStr1<<" "<<BinStr2<<" "<<endl;

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

// Individual* execute(Individual* indPtr, Mutator* mPtr, int k); 
return 0;   
}

