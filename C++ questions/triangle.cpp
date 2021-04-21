#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b && b==c){
        cout << "Triangle is equilateral" << endl;
    }
    else if (a==b || a==c || b==c){
        cout << "Triangel is isosceles" << endl;
    }
    else {
        cout << "Triangle is scalene" << endl;
    }

    return 0;
}