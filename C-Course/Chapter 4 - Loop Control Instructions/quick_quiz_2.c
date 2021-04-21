# include<stdio.h>
    int main(){

    int n;
    
    printf("enter n\n");
    scanf("%d", &n);

    int q=n-(n-1);

    do { 
        printf("%d\n", q );
        q++ ;
    } while(q<=n);

    return 0;
}