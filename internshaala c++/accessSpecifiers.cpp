#include <iostream>
#include <string>
using namespace std;
class Animal
{

private:
    int age = 5;

protected:
    int eyes; 

public:
    void takeAge(int age)
    {
        this->age = age;
    }
    int afterAge()
    {
        return 5 + age;
    }
};
class Dog : public Animal{
    public:
    void numEyes(){
    this -> eyes=2;
    }
    
};

int main()
{
    Animal a1;
    Dog d1;
    // a1.age=9; // cannot be accessed.
    a1.takeAge(9);
    d1.numEyes();
    cout << "Age of animal after 5 years from now will be " << a1.afterAge() << endl ;
    return 0;
}