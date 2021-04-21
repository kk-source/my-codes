# include<stdio.h>
    int main(){

    int n,p;
    printf("enter n\n");
    scanf("%d", &n);

    int i=2;
    for(i<=n; n%i==0 && n!=2; i++){
    p=0;
    break;
    }
    if(p==0) {
        printf("the entered number is co-prime");}
    else{printf("the entered number is prime");}

    return 0;
}