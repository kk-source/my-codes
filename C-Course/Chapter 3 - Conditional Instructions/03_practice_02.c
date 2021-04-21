# include<stdio.h>
    int main(){

    int a;
    int b;
    int c;
    
    printf("enter your marks in subject 1\n");
    scanf("%d", &a);

    printf("enter your marks in subject 2\n");
    scanf("%d", &b);

    printf("enter your marks in subject 3\n");
    scanf("%d", &c);

    int d = (a+b+c)/3;

    if ( d>=40 && (b,c,a>=33) ) {
        printf("you are pass");
    }
    else {
        printf("you are fail");
    }
    
    return 0;
}