# include<stdio.h>
void version(char *a, int *c){
int b=0;
    for (int i=0;a[i]!='\0'; i++){
    b++;
    }
    *c=b;
}
int main(){
    char *st="kartik";
    int a=0;
    version(st,&a);
    printf("the length of string is %d", a);
    return 0;
}