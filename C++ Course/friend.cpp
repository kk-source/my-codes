#include <iostream>
#include <string>
using namespace std;
class complex{
    int real;
    int com;
    friend complex sumCom(complex c1, complex c2); // write complete format of the function.
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
complex sumCom(complex c1, complex c2){
    complex temp;
    temp.setdata((c1.real+c2.real), (c1.com+c2.com));
    return temp;
}
int main(){
    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.getdata();
    c2.setdata(3,4);
    c2.getdata();
    c3=sumCom(c1,c2);
    c3.getdata();
    return 0;
}