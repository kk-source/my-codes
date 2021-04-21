#include <iostream>
#include <string>
using namespace std;
int pairFriends(int n){ // we have to return number of ways pairs and singles can be made.
    if (n==1 || n==2 || n==0){
        return n;
    }     // first single            // first pair
    return pairFriends(n-1) + ((n-1)*pairFriends(n-2));
}
int main(){
    cout << pairFriends(3);

    return 0;
}