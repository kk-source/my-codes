#include <iostream>
#include <iomanip>
using namespace std;
int k=23;
int main(){  
// printing global variable when local is also present.
int k=2;
cout << k << " " << ::k << endl;
// reference variable.
float x=455;
float & y=x; // y is the nickname of x, it points to exactly same location as that of x.
cout << &x << endl;
cout << &y << endl;
cout << x << endl;
cout << y << endl;
// floating integer and long double literal.
cout << "the size of 34.4 is " << sizeof(34.4) << endl;
cout << "the size of 34.4f is " << sizeof(34.4f) << endl;
cout << "the size of 34.4F is " << sizeof(34.4F) << endl;
cout << "the size of 34.4l is " << sizeof(34.4l) << endl;
cout << "the size of 34.4L is " << sizeof(34.4L) << endl;
// Typecasting-
int a=2;
float b=3.2;
cout << (int)b << endl;
cout << int(b) << endl;
cout << a+b << endl;
cout << a+(int)b << endl;
cout << a+int(b) << endl;
// Manipulators
cout << setw(4) << a << endl;
cout << setw(4) << b << endl;
    return 0;
}