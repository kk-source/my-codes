# include<stdio.h>
int max(int a,int b){
    return (a>b)? a:b;
}
int max_value(int a,int b, int c, int d){
return max(a,max(max(c,d),b));
}
    int main(){
    int a=2,b=3,c=4,d=5;
    int e=max_value(a,b,c,d);
    printf("%d", e);
    return 0;
}