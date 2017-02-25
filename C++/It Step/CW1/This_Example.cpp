// Example program
#include <iostream>

using namespace std;
    
class Student{
    private:
        unsigned short age;
        char* name;
        char* surname;    
    public:
        Student(char* name, char* surname,unsigned short age){
            this -> name = name;
            this -> surname = surname;
            this -> age = age;
        };
        
        void Show(){
            cout << endl << "Name - " << this -> name;
            cout << endl << "Surname - " << this -> surname;
            cout << endl << "Age - " << this -> age;
        };
    
        ~Student(){
            cout << endl << "~Deleted!";
            }
};    

int main(){
       
       Student A("Ventsislav", "Simeonov", 26);
       A.Show();
       
    return 0;
}