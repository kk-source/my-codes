#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    cout << vec.max_size() << endl;
    vector<int>::iterator iter=vec.begin();
    // *iter=4;
    for (int i=0;i<vec.size();i++){
        cout << vec[i] << " " ;
    }
    vec.pop_back();
    vec.insert(iter, 31); // inserts 31 at iter's position.
    vec.insert(iter, 3, 12); // inserts 3 copies of 12 at iter's position.

    vector<int> vec1(3); // creates a vector of size three.
    vector<int> vec3(3,2); // creates a vector of size 3 and all elements initialised to 2.
    vector<int> vec2(vec3); // creates exact copy as that of vec1.
    return 0;
}