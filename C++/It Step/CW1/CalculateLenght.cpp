// Example program
#include <iostream>
#include <string>

using namespace std;

class Obikolka {
    public: 
    int a, b, c;
    Obikolka(){};
    Obikolka(int a,int b){ 
        cout << "Obikolka pravougalnik = " << (a + b)*2 << endl;
    };
    Obikolka(int a,int b,int c){
            cout << "Obikolka triugalnik = " << a + b + c << endl;
    };
    
    ~Obikolka(){
        cout << "~a: " << a << " deleted!" << endl;
        cout << "~b: " << b << " deleted!" << endl;
        cout << "~c: " << c << " deleted!" << endl;
        };
};

int main() {
    bool count = 0;
    Obikolka Test;
    
    do{
        if (count == NULL){
            cout << "Enter numbers for calculating the lenght of a triangle:" << endl;    
            cin >> Test.a; cin >> Test.b; cin >> Test.c;
            count++;
        }else{
            cout << "Wrong paramenters!" << endl;    
            cout << "Enter numbers for calculating the lenght of a triangle:" << endl; 
            cin >> Test.a; cin >> Test.b; cin >> Test.c;
            count++;
        }
        
    }while (!((Test.a + Test.b) > Test.c && (Test.a + Test.c) > Test.b && (Test.c + Test.b) > Test.a));
    
    Obikolka(Test.a, Test.b, Test.c);      

    
    count = 0;
    
    cout << "Enter numbers for  calculating the lenght a rectangle:" << endl;
    cin >> Test.a; cin >> Test.b;
    Obikolka(Test.a, Test.b); 

    
    return 0;
}
