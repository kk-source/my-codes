# include<stdio.h>
    int main(){

    int a,b;

    printf("enter number\n"); 

    scanf("%d", &a);

    if(a%2==0) {
        printf("%d is even\n",a);
    }
   else {
       printf("%d is odd", a);
   }
    return 0;
}