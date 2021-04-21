#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:    
    void displayDetails(){
            cout << "ID : " << id << endl << "Full Name: " << getFullName()<< endl;
        };       
        int id;
        string firstName;
        string lastName;
        Employee(){
            cout << "Employee object created\n";
        } ; // default constructor.

        Employee(int id, string firstName, string lastName);
        string getFullName();
};
string Employee :: getFullName(){ 
            return firstName + " " + lastName; // function.
        };

Employee :: Employee(int id, string firstName, string lastName){ // parameterised constructor.
            this -> id=id; // this id means above id.
            this -> firstName=firstName;
            this -> lastName=lastName;
        }        

int main(){
    Employee emp1(1, "kart", "singh"); // can use class also before Employee.
    // emp1.lastName="kushwah"; // to change lastnName.
    emp1.displayDetails();

    Employee emp2; // using default constructor.
    emp2.id=334;
    emp2.firstName="mansi";
    emp2.lastName="kushwah"; 
    emp2.displayDetails();

    return 0;
}