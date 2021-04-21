# include<stdio.h>
    int sum(int a, int b);
    int main(){
    int c;
    c=sum(2,5);
    printf("%d\n", sum(2,5));
    printf("%d\n", sum(2,6));
    printf("%d\n", c);
    return 0;
}
int sum(int a, int b) {
    int result;
    result = a+b;
    printf("%d\n", result);
    return result;
}