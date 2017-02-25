// Example program
#include <iostream>
#include <string.h>

using namespace std;

class _3D {
    /*Declare varibles*/
  private:
    double x, y, z;
    
    /*Publicly accessed methods*/
  public:
    /*Initialize*/
        _3D(){
            x = y = z = 0;
            cout << endl << "No arguments" << endl;
        };
        
        _3D(double intitX, double intitY, double intitZ){
            x = intitX;
            y = intitY; 
            z = intitZ; 
            cout << endl << "S argument" << endl;            
        };
        
        
        void Show(){
            cout << x << " " << y << " " << z << endl;
        }
        
        ~_3D(){ cout << "~Deleted!" << endl; };
    
};


int main(){
    _3D A(3, 4, 0);
    _3D*PA = &A;
    
    A.Show();
    PA -> Show();
    
    return 0;
}