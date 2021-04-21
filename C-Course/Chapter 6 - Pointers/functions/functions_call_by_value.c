# include<stdio.h>
int sum(int a, int b);
    int main(){
    int a=3, b=5;
    printf("sum of a and b is %d\n", sum(3,5));
    printf("sum of a and b is %d\n", sum(a,b));
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    a=12;
    b=15;
    return c;
} /* as already discussed in misnomer concept, values
are simply copied from the main program to  functions 
and so functions cann't change the value of variables
in main when we pass values to the function */