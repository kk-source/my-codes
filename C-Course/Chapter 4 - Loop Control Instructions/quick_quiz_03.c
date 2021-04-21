# include<stdio.h>
    int main(){

    int n, i=1;

    printf("enter the value of n\n");
    scanf("%d", &n);

    for(; i<=n; i++) {
       printf("natural numbers are %d\n", i); 
    }
    printf("natural numbers are %d\n", i);

    return 0;
}