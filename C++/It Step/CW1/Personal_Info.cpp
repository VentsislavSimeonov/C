// Example program
#include <iostream>
#include <string.h>

using namespace std;

class Personal {
    private:
        /*Declare data which by understanding is private*/
        char*picture_data;
        char*name;
        int age;
        
    public:
        /*Declare constructor and get heap memory*/
        Personal(char *p, char *n, int a){
            
            /*create char array*/
            name = new char[strlen(n) + 1];
            
            /*Check if there is input*/
            if(!name){
                cout << "Error!!!" << endl;   
                exit(0);
            }
            
            /*create char array*/
            picture_data = new char [strlen(n) + 1];
            
            /*Check if there is input*/
            if(!picture_data){
                cout << "Error!!!" << endl;
                exit(0);
            }
            
            /*assign data to variable*/
            strcpy(picture_data, p);
            strcpy(name, n);
            age = a; 
        }
        
        /*methods that does not change the variables of the class*/
        

        const char* Name()const{
            return name;   
        }
        
        int Age()const{
            return age;
        }

        const char*Picture()const{
            return picture_data;
        }
        
        /*methods that change the data's state*/
        void SetName(const char*n){
            strcpy(name, n);
        }
        
        void SetAge(int a){
            age = a;
        }
    
        void SetPicture(const char*p){
            strcpy(picture_data, p);
        }
        
        void printData ()const{
        cout << "Name: " << Name() << endl;
        cout << "Age: " << Age() << endl;
        cout << "Path to picture" << Picture() << endl;
        }
        
        ~Personal(){
            delete[]name;
            delete[]picture_data;
            cout << "~Deleted!" << endl;
        };
          
    };



int main(){
    /*create an object with the constructor*/
    Personal A("C:\\Image\\", "Ivan" , 23);
    /*print the object's data*/
    A.printData();
    
    /*set the data for the object*/
    A.SetName("Gosho");
    A.SetAge(40);
    A.SetPicture("C:\\Test\\");
   
    /*print the object's data*/
    A.printData();
    
    
    return 0;
}