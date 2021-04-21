#include <iostream>
using namespace std;
  
struct Record {
    private:
    // public:
    int x = 7;
    int func(){
        return 3;
    }
};

int main()
{
    struct Record s;
    cout << s.x << endl;
    cout << s.func() << endl;
    return 0;
}