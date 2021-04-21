#include <iostream>
using namespace std;
 
class Test {
    int value;
 
public:
    Test(int v = 0) { value = v; }
 
    int getValue() const;
};
int Test::getValue() const{
    // value=32;
    return value;
}
struct test{
    private:
    int value;
    public:
    void putvalue(int a=23){
        value=a;
    }
    int getvalue(){
        return value;
    }
} t;
int main()
{
    // Test t(20);
    // cout << t.getValue();
    test t;
    t.putvalue(2);
    cout << sizeof(t);
    return 0;
}