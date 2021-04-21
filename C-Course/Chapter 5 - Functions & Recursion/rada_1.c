# include<stdio.h>
int pattern(int n);
    int main(){
      int n;
    printf("enter n\n");
    scanf("%d", &n);
pattern(n);
    return 0;
}
int pattern(int n){
    for (int a=n; a>=1; a--){
        for (int c=1; c<=2*a-1; c++){
            printf("*");
        }
        printf("\n");
}
}
