# include<stdio.h>
    int main(){

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    int l=n;

    for (int i=n-1; i>=1;i-- ){
        l*=i;
    } // or write it as for(int i=n; i>0; l*i, i--){}

    printf("factorial n is %d", l);

    return 0;
    }