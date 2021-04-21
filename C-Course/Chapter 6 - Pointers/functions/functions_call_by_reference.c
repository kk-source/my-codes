# include<stdio.h>
    void swap (int *a, int *b);
    void wrong_swap (int a, int b);
    int main(){
    int a=2, b=3;
    printf("the value of  a and b is %d and %d\n", a,b);
    swap(&a,&b);// will work due to call by reference
    wrong_swap(a,b);//will not work due to call by value
    printf("the value of  a and b is %d and %d\n", a,b);
    return 0;
}
void wrong_swap (int a, int b){
int temp;
temp=a;
a=b;
b=temp;
}
void swap (int *c, int *d){ // here c=&a and d=&b.
int temp;
temp=*c;
*c=*d;
*d=temp;
}