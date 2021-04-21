#include <iostream>
#include <string>
using namespace std;
class Animal {
    public:
    int age;
    string color;
    void run(string dd){
        cout << "Animal " << dd << " running\n";
    }
};
class Dog : public Animal{
    public: 
    string petName;
    void bark(){
        cout << "Dog barking\n";
    }
};
class Lion : public Animal{
    public:
    void roar(){
        cout << "Lion roaring\n";
    }
};

int main(){
    Dog dog1;
    dog1.age=3;
    dog1.color="black";
    dog1.petName="google";
    dog1.bark();
    dog1.run("Dog");
    cout << endl << endl;
    Lion lion1;
    lion1.age=12;
    lion1.color="yellow";
    lion1.roar();
    lion1.run("Lion");

    return 0;
}