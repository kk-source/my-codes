#include <iostream>
using namespace std;
void primenumber(int n){
    bool arr[n];

    for (int i=1;i<=n;i++)
        arr[i]=true;

    int p=2;
    while((p*p)<=n){
        for (int i=p*p;i<=n;i+=p){
            if ((i%p)==0){
                arr[i]=false;
            }
        }
        p++;
    }
    for (int i=2;i<=n;i++){
        if (arr[i]){
            cout << i << " ";
        }
    }
}
void primefactor(int n){
    int spf[n];
    for (int i=1;i<=n;i++){
        spf[i]=i;
    }
    for (int i=2;i<=n;i++){
        if (spf[i]==i){
            for (int j=i*i;j<=n;j+=i){
                if (spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while (n!=1){
        cout << spf[n] << " ";
        n=n/spf[n];
    }
}
int main(){
    int n;
    cin >> n;
    primenumber(n);
    cout << endl;
    primefactor(n);
    return 0;
}