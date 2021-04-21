# include<stdio.h>
    int main(){

    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    int i=1;
    while(i<=10) {
        printf("%d X %d = %d\n", n, i, i*n);
        i++;
    } 
    // or use for loop as follows
    // for(int i=1; i<=10; i++){printf("the table is %d\n", i*n);}

    return 0;
}