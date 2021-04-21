#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    
    map<string, int> m;
    m["kartik"]=12;    m["mansi"]=19; // one way.

    m.insert({{"vimla", 7}, {"veersingh",23}}); // second way.

    m.insert(pair<string, int>("vimla", 7)); // third way.

    map<string, int>:: iterator i;
    for (i=m.begin();i!=m.end();i++)
        cout << (*i).first << " " << i->second << endl;
    
    for (auto& j: m)
       cout << j.first << " " << j.second << endl;

    int arr[]={1, 1, 2, 1, 1, 3, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (auto z:arr)
    cout << z << " ";
    cout << endl;

    map<int, int> kk;
    for (auto z:arr)
        kk[z]++;
  
    cout << "Element  Frequency" << endl;
    for (auto i : kk)
        cout << i.first << "   " << i.second << endl;
    return 0;
}