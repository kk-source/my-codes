# include<stdio.h>
    int main(){

    int a=8;
    printf("enter a number\n");
    scanf("%d", &a);

    while(a<10 && a>2){
        printf("%d\n",a);
        a--;
    }

    return 0;
}