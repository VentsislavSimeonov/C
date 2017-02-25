#include <iostream>
using namespace std;

default class encapsulationA(){
    private int x;
    protected int y;
    public int z;
};

class constructorsB(){
    public constructorB();          // consturctor >> primitive
    public constructorB(int a);     // constructor that includes constructorB() and expands the constructor >> overloading
    public constructorB(bool a);    // constructor that includes constructorB() and expands the constructor >> overwriting ->
                                    //                                   (changes the required parameter for the constructor)
    
    ~B();                           // destructor >> max 1 destructor
};


int main(){

    encapsulationA a; 
    constructorsB *p;
    
    //encapsulation
    encapsulationA.z = 0;

    //consturctor syntax >> dynamicly alocated memory
    constructorsB *p = new constructorsB();
    
    // free up the dynamically alocated memory
    delete(constructorsB);
    retuirn 0;
};