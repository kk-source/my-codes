#include <iostream>
#include <string>
using namespace std;

// forward declaration:-
class Y;
class X{
    int value;
    public:
    void setvalue(int data){
        value=data;
    }
    void getvalue(){
        cout << value << endl;
    }
    friend int add(X, Y);
    friend void swap(X &, Y &);
    friend void swap2(X *, Y *);
};
class Y{
    int value;
    public:
    void setvalue(int data){
        value=data;
    }
    void getvalue(){
        cout << value << endl;
    }
    friend int add(X, Y);
    friend void swap(X &, Y &);
    friend void swap2(X *, Y *);
};
int add(X a, Y b){
    return a.value+b.value;    
}
void swap(X &a, Y &b){ // can swap values in this way also as opposed to c language.
    int temp=a.value; 
    a.value=b.value;
    b.value=temp;
}
void swap2(X *a, Y *b){ // can swap values this way also similar to that in c language.
    int temp= (*a).value;
    (*a).value=(*b).value;
    (*b).value=temp;
}
void swap1(int &a, int &b){ // to swap values.
    int temp=a;
    a=b;
    b=temp;
} 
int main(){
    X a;
    Y b;
    a.setvalue(2);
    b.setvalue(3);
    cout << add(a, b) << endl;
    swap2(&a, &b);
    a.getvalue();
    b.getvalue();
    int p=1;
    int q=2;
    swap1(p,q);
    cout << p << " " << q << endl;
    return 0;
}