# include<stdio.h>
    int main(){

    int n, p;
    printf("enter n\n");
    scanf("%d", &n);
    int i=2;
    while(i<n){
        if ( n%i==0 && n!=2){
            p=1;
        break;}
        i++;
    }
    if (p==1) {printf("the entered number is co-prime");}
    else{
        printf("the entered number is prime");
    }
    return 0;
}