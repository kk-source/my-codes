# include<stdio.h>
    int main(){

    int n;
    printf("enter n\n");
    scanf("%d", &n);

    int q= n-(n-1);

    while (q<n) {
        printf("%d\n", q);
        q++;
    }

    return 0;
}