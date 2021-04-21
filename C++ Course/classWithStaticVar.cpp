
// C++ program to demonstrate static
// variables inside a class
  
#include<iostream>
using namespace std;
  
class GfG
{
   public:
     static int i;
     int val;
     GfG()
     {
        val=2;
     };
     static void printMsg() // can access only static data members and functions.
    {
        cout<<i << endl;
    }
};
int GfG:: i=4;
int main()
{
  GfG obj1;
  GfG obj2;
    GfG::printMsg();
  obj1.i =2;
    GfG::printMsg();
  obj2.i = 3;
    
  // prints value of i
//   cout << obj1.i<<" "<<obj2.i;  
    cout << GfG::i;
    obj1.printMsg();
    obj2.printMsg();
}