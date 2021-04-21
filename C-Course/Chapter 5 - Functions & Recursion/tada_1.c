# include<stdio.h>
void pattern(int n);
    int main(){
        int n;
    printf("enter n\n");
    scanf("%d", &n);
pattern(n);
    return 0;
}
void pattern(int n){
    for (int c=1; c<=n; c++){
        for (int b=1; b<=2*c-1; b++){
            printf("*");
        }
printf("\n");
    }
    return;
}