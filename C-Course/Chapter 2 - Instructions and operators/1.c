# include<stdio.h>
    int main(){
    int a=1; 
    int b=a+2; 
    // but int b=a+2, a=1 is incorrect;
    a=b=2; //it this line is added then output comes out to be 2;
    a=b=3; //if this line is added along with above line then output comes out to be 3;

    printf("The value of b is %d", b);

    return 0;
}