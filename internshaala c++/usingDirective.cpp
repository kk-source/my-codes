#include <iostream>
#include <string>
using namespace std;

namespace jp{
    int value=3;
}

namespace jp1{
    int value=5;
}

using namespace jp;
// using namespace jp1; // wrong step as it will be difficult to identify value then.

int main(){
    // value=100; // changes value of jp's value from 3 to 100.
    //int value=10; // given preference at that line.
    cout << jp::value << endl;
    cout << jp1::value << endl;
    cout << endl;
    cout << value << endl; // this line.

    return 0;
}
