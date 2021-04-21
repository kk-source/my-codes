# include<stdio.h>
    int main(){

    int n;
    printf("enter n\n");
    scanf("%d", &n);
    int i=1;
    int l=1;
    while(i<=n){
        l*=i;
        i++;
    }
    printf("n factorial is %d", l);

    return 0;
}