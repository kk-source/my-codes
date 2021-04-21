# include<stdio.h>
    int main(){

    int n, p;
    printf("enter n\n");
    scanf("%d", &n);
    int i=2;
    do{p=n%i;
    if(p==0 && n!=2){break;}
    i++;}while(i<n);
    if(p==0 && n!=2){printf("the entered number is co-prime");}
    else{printf("the entered number is prime");}

    return 0;
}