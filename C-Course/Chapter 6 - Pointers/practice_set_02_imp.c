# include<stdio.h>
    int *address(int a);
    int *address_(int a);
    int main(){
    int i;
    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", address(i));
    printf("the address of i is %u\n", address_(i));
    return 0;
    }
int *address(int a){
    return &a;
}
int *address_(int a){
    int *c;
    c=&a;
    return c;
}
