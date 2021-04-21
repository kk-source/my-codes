#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2> // function template
float average(T1 a, T2 b){ 
    return (a+b)/2.0;
}
template <class kk> // class template, default template
class vector{
    public:
    kk *arr;
    int size;
    vector(int n);
    float product(vector v){
        kk temp=0;
        for (int i=0;i<size;i++){
            temp+=arr[i]*v.arr[i];
        }
        return temp;
    }
};

template<class T> // template class name may or may not be same as the class template.
vector<T>::vector(int n){
        size=n;
        arr=new T[size];
}

int main(){
    // vector<> v0(2.2); // for default template.
    vector<float> v1(3), v2(3);
    v1.arr[0]=1.2;
    v1.arr[1]=3.4;
    v1.arr[2]=5.45;
    v2.arr[0]=2;
    v2.arr[1]=4;
    v2.arr[2]=6;
    cout << v1.product(v2);
    // cout << average<>(2,3.6);

    return 0;
}