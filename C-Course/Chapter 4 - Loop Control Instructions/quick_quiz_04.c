# include<stdio.h>
    int main(){

    int n;
    printf("enter n\n");
    scanf("%d", &n);

    for(int i=n; i>0; i--){ // or it can also be written as i=n; i= i--){
        printf("%d\n", i);
    }

    return 0;
}