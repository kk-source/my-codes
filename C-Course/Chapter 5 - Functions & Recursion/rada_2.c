# include<stdio.h>
void pattern(int n);
    int main(){
     int n;
    printf("enter n\n");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
void pattern(int n) {
    if (n==1){
        printf("*");
    }
    else{
        for(int i=1; i<=2*n-1; i++){
            printf("*");
        }
        printf("\n");
        pattern(n-1);
        return;
        }
        }