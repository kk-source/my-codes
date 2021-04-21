#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor but if present it has more preference.
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = (obj).a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};

int main(){
    Number z(45), z2;
    cout << "1" << endl;
    Number z1(z); // Copy constructor invoked
    z1.display();

    cout << "2" << endl;
    Number z3 = z2; // Copy constructor invoked
    z3.display();

    cout << "3" << endl;
    z2 = z; // Copy constructor not called
    z2.display();

    // z1 should exactly resemble z.

    return 0;
}
