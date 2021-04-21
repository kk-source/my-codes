# include<stdio.h>
int sum (int *a, int *b);
float avg (int *a, int *b);
    int main(){
    int a=2, b=5;
    int *c=&a, *d=&b;
    printf("the value of sum and avg of %d and %d are %d and %f respectively\n", a,b,sum(c,d),avg(c,d));
    return 0;
}
int sum (int *a, int *b) {
return *a+*b;
}
float avg (int *a, int *b){
return (*a+*b)/2.0;
}