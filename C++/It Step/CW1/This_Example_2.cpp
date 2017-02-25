// Example program
#include <iostream>
#include <string.h>

using namespace std;
    
class Student{
    private:
        string age;
        string name;
        string surname;
        string egn;

    public:
        /*Declare constructor*/
        Student(string name, string surname,string age, string egn){
            this -> name = name;
            this -> surname = surname;
            this -> age = age;
            this -> egn = egn;
        };
        
        /*Display Class variables*/
        void Show(){
            cout << endl << "Name - " << this -> name;
            cout << endl << "Surname - " << this -> surname;
            cout << endl << "Age - " << this -> age;
            cout << endl << "EGN - " << this -> egn;

        };
        
        /*Setters*/
        string setName(string name){
            return this -> name = name;
        }
        
        string setSurname(string surname){
            return this -> surname = surname;

        }
        
        string setAge(string age){
            return this -> age = age;
        }
        
        string setEGN(string egn){
            return this -> egn = egn;    
        }
    
        
    
        ~Student(){
            cout << endl << "~Deleted!";
        }
};    

int main(){
       
        Student A("Vir", "Sir", "500", "0as");
        A.Show();
        
        string input;
        cout << endl;
        cin >> input;
        A.setName(input);
        
        cout << endl;
        cin >> input;
        A.setSurname(input);
        
        cout << endl;
        cin >> input;
        A.setAge(input);
        
        cout << endl;
        cin >> input;
        A.setEGN(input);
        
        A.Show();

    return 0;
}