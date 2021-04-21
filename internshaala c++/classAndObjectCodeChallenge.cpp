#include <iostream>
#include <string>
using namespace std;

class dog{
    public :
    dog(){
        cout << "Dog object created\n";
    } // constructor created.
    int age;
    string color;
    string breed;
    string petName;
    void displayDetails();
};
void dog::displayDetails(){
        cout<< "Color is : " << color << ". Breed is : " << breed << ". Pet name is : " << petName << ". Age is : " << age;
    }

int main(){
    dog d1;
    d1.age=2;
    d1.color ="red";
    d1.breed ="lebra";
    d1.petName = "sheru";
    d1.displayDetails();
    cout <<endl <<"\n";
    dog d2;
    d2.age=5;
    d2.color ="black";
    d2.breed ="pomelian";
    d2.petName = "tommy";
    d2.displayDetails();

    return 0;
}