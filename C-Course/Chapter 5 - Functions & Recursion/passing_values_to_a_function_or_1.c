# include<stdio.h>
    int sum(int a, int b);
    int main(){
    sum(2,6);
    return 0;
}
int sum(int a, int b) {
    int result;
    result = a+b;
    printf("%d", result);
    return 0; // or write result instead of 0
}