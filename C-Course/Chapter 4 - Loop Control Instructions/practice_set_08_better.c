# include<stdio.h>
    int main(){

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    int l=1;

    for (int i=1; i<=n;i++){
        l*=i;
    }

    printf("factorial n is %d", l);

    return 0;
    }