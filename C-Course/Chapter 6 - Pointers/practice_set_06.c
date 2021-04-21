# include<stdio.h>
void change(int *a);
void change_(int a);
    int main(){
    int n=4;
    change_(n);
    printf("%d\n", n);// call by value
    change(&n);
    printf("%d", n);// call by reference
    return 0;
}
void change(int *a){
    int b;
    b=10**a;
    *a=b;
}
void change_(int a){
    int b;
    b=10*a;
    a=b;
}