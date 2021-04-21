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
int i=1;
while (i<=(2*n-1) && n!=1 && n>0) {
    printf("*");
    i++;
}
printf("\n");
if (n-1==1){
    printf("*");
    return;
}
pattern(n-1);
}
