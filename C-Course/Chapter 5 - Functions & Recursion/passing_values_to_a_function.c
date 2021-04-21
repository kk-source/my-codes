# include<stdio.h>
    int sum(int a, int b);
    int main(){
    printf("%d",sum(2,5));// can also take int c; then c=sum(2,6) and then printf("%d\n", c);
    return 0;
}
int sum(int a, int b) {
    int result;
    result = a+b;
    return result; //c used here and above are different because shubham in one house is not similar to shubham in some other house.
}