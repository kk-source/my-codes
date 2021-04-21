# include<stdio.h>
int change(int a);
    int main(){
        int b=23,c=change(b);
        change(b);
        
printf("%d\n", b);
printf("%d\n", change(25));
printf("%d\n", c);
    return 0;
}
int change(int a) {
    a=21;
    // return 0;
    } // or write return a but don't write return 0 else ans will be 0