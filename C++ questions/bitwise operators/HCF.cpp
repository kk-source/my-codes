#include <iostream>
using namespace std;
int hcf(int a, int b){
    while (b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    cout << hcf(42,24);
    return 0;
}