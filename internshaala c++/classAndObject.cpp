#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:            // Access specifier.
        int id;
        string firstName;
        string lastName;
        string getFullName(){ // METHOD INSIDE CLASS.
            return firstName + " " + lastName;
        }
        void displayDetails();
};

void Employee::displayDetails(){
            cout << "ID : " << id << endl << "Full Name: " << getFullName()<< endl;
        }

int main(){
    Employee emp1; // can use class also before Employee.
    emp1.id=3;
    emp1.firstName="kartik";
    emp1.lastName="singh";
    // cout << emp1.id << endl << emp1.firstName << endl << emp1.lastName<< endl << emp1.getFullName()<< endl;
    emp1.displayDetails();


    return 0;
}