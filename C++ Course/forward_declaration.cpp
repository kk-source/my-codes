#include <iostream>
#include <string>
using namespace std;
// forward declaration
class complex;

class calc{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumRealComplex(complex , complex );
};
class complex{
    int real;
    int com;
    // friend int calc::sumRealComplex(complex o1, complex o2);
    friend class calc;    
    public:
    void setdata(int a, int b);
    void getdata();
};
void complex::setdata(int a, int c){
    real=a;
    com=c;
}
void complex::getdata(){
    cout << real << " + " << com << "i"<< endl; 
}
int calc::sumRealComplex(complex o1, complex o2){
        return (o1.real+o2.real);
    }
int main(){
    complex c1, c2;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(3,4);
    c2.getdata();
    calc c;
    int res=c.sumRealComplex(c1, c2);
    cout << res << endl;

    return 0;
}