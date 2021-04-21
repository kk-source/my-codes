#include <iostream>
#include <string>
using namespace std;

int addBinaryNumbers(int a,int b){
    int sum=0;
    int i=1;
    int ans=0;
    int carry=0;
    while (a>0 || b>0){
        sum=a%10+b%10+carry;
        a=a/10;
        b=b/10;
        switch (sum)
        {
        case 0:
            ans+=0;
            carry=0;
            i*=10;
            break;
        case 1:
            ans+=1*i;
            carry=0;
            i*=10;
            break;
        case 2:
            ans+=0;
            carry=1;
            i*=10;
            break;
        case 3:
            ans+=1*i;
            carry=1;
            i*=10;
            break;
        default:
            break;
        }
    }
    return ans+i*carry;
}
int main(){
    int a,b;
    cout << "Enter N" << endl;
    cin >> a >> b;
    cout << addBinaryNumbers(a,b);
    return 0;
}