# include<stdio.h>
    int main(){
    int a=2;
    int *b=&a;
    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", b);
    printf("the value of a is %d\n", *b);
    printf("the value of a is %d", a);
    return 0;
}