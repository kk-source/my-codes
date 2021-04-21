# include<stdio.h>
int change(int *n);
    int main(){
    int a=5;
    printf("10 times of %d is %d\n", a,change(&a));
    return 0;
}
int change(int *n){ //n=&a
int c=10*(*n);
return c;
}