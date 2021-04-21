# include<stdio.h>
void pattern (int n);
    int main(){
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
void pattern (int n) {
    if (n==1){
        printf("*\n");
    }
    else {
        pattern(n-1);// first n=3 comes (suppose) then 2 number comes and does not do anything to
        for (int c=1; c<=2*n-1; c++){ // pattern(n-1) so goes to for condition in next line.
            printf("*");
        }
        printf("\n");
        return;
    }
}
