#include <iostream>
#include <string>
using namespace std;

/*
Inheritance:
student -->test [Done]
student-->sports [Done]
test --> result [Done]
sports --> result [Done]
*/


class Student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no=a;
    }
    void print(){
        cout << "Roll no. of student is " << roll_no << endl;
    }
};
class test:virtual public Student{ // may lead to errors if not declared virtual.
    protected:
    float phy, maths;
    public:
    void set_marks(int a, int b){
        phy=a;
        maths=b;
    }
    void get_marks(){
        cout << "Marks in phy is " << phy << " and in maths is " << maths << endl;
    }
};
class sports:virtual public Student{ // may lead to errors if not declared virtual. 
    protected:
    int score;
    public:
    void set_score(int a){
        score=a;
    }
    void get_score(){
        cout << "PT score is " << score << endl;
    }
};
class result : public sports, public test{ // not compulsory to write virtual here.
    float res;
    public:
    void final(){
        res=phy+maths+score;
        print();
        get_marks();
        get_score();
        cout << "Total marks are " << res << endl;
    }
};
int main(){
    result h;
    h.set_roll_no(27);
    h.set_marks(99, 95);
    h.set_score(9);
    h.final();

    return 0;
}
