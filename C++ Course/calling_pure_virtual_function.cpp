#include <iostream>
using namespace std;

class A {
public:
    virtual void f() = 0;
};

void A::f() {
    cout<<"Test"<<endl;
}
class B : public A {
    public:
    virtual void f() {
        // class B doesn't have anything special to do for f()
        //  so we'll call A's

        // note that A's declaration of f() would have to be public 
        //  or protected to avoid a compile time problem
        
        A::f();
    }

};
int main(){
    B b;
    b.f();
    return 0;
}