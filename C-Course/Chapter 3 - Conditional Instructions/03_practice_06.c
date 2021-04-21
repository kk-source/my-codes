# include<stdio.h>
    int main(){

    int a,b,c,d;
    printf("enter the numbers\n");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d );

    if((a>b && a>c && a>d)) {
        printf("%d is greatest", a);
    }
    else if((b>a && b>c && b>d)) {
        printf("%d is greatest",b);
    }
    else if((c>b && c>a && c>d)) {
        printf("%d is greatest",c);
    }
    else if((d>b && d>c && d>a)) {
        printf("%d is greatest",d);
    }
    else {
        printf("either of the two numbers are same");
    }
    return 0;
}