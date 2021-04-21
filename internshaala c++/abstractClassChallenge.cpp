#include <iostream>
using namespace std;

class Shape {        // Should act like an abstract class or interface.  
    public:
    virtual double getArea()=0;
    virtual double getPerimeter()=0;
        /* Complete the code */ 
    /* Define two pure virtual functions: getArea() and getPerimeter(). */
};

class Square : public Shape {
    public:
    double length;
    void setLength(double a){
        length=a;
    }
    virtual double getArea(){
        return length*length;
    }
    virtual double getPerimeter(){
        return 4*length;
    }
    /* Complete the code */ 
    /* Override appropriate methods and define 
       appropriate attributes as required. */ 
    
};

class Rectangle : public Shape {
    public:
    double length,breadth;
    void setLength(double a,double b){
        length=a;
        breadth=b;
    }
    virtual double getArea(){
        return length*breadth;
    }
    virtual double getPerimeter(){
        return 2*(length + breadth);
    }
    /* Complete the code */ 
    /* Override appropriate methods and define 
       appropriate attributes as required. */ 

};

class Circle : public Shape {
    public:
    double length;
    void setLength(double a){
        length=a;
    }
    virtual double getArea(){
        return length*length*3.14;
    }
    virtual double getPerimeter(){
        return 2*3.14*length;
    }
    /* Complete the code */ 
    /* Override appropriate methods and define 
       appropriate attributes as required. */ 

};

class Triangle : public Shape {
    public:
    double length,height;
    void setLength(double a,double b){
        length=a,height=b;
    }
    virtual double getArea(){
        return length*length*3.14;
    }
    virtual double getPerimeter(){
        return 2*3.14*length;
    }
    /* Complete the code */ 
    /* Override appropriate methods and define 
       appropriate attributes as required. */ 
    
};


int main() {
    
    class Square s1;
    s1.setLength(12);
    cout << "The area of square is " << s1.getArea() << " and perimeter is " << s1.getPerimeter() << " sq. units" << endl;
    return 0;
}