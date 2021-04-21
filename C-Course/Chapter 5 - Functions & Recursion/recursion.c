# include<stdio.h>
int factorial(int a);
    int main(){int a,b;
printf("enter the value of n\n");
scanf("%d", &a);
    b=factorial(a);
    printf("the value of factorial is %d\n",b);

    return 0;
}
int factorial(int a){
    if (a==0 || a==1){
        return 1;  // base condition.
    }
    else {
        return a*factorial(a-1);
    }
}