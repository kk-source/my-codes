# include<stdio.h>
    int main(){

    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    int i=10;
    while(i>=1) {
        printf("%d X %d = %d\n", n, i, i*n);
        --i; // or i--;
    }


    return 0;
}

