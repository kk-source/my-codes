#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:          
        int id;
        string firstName;
        string lastName;
        Employee(){
            cout << "Employee object created\n"; // initiated when object is created.
        } ; // default constructor.
        ~Employee();
        void displayDetails(){
            cout << "ID : " << id << endl << "Full Name: " << getFullName()<< endl;
        }; 
        string getFullName();
};
string Employee :: getFullName(){ 
            return firstName + " " + lastName; // function.
        };  
Employee :: ~Employee(){
    cout << "Employee object with id:" << this->id << " being deleted\n";
    cout << "Employee object with id:" << this->firstName << " being deleted\n";
    cout << "Employee object with id:" << this->lastName << " being deleted\n";
}
int main(){
    Employee emp1,emp2; // can use class also before Employee.
    emp1.id=12;
    emp1.firstName="Kartik";
    emp1.lastName="singh"; // to change lastnName.
    emp1.displayDetails();

    emp2.id=334;
    emp2.firstName="mansi";
    emp2.lastName="kushwah"; 
    emp2.displayDetails();

    cout << "Program end\n";
    return 0;
}