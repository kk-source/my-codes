# include<stdio.h>
int func(int a,int b){
    return a+b;
}
    int main(){int a,b;
    printf("%d\n", func(2,4));
    int (*ptr) (int,int)=&func;
    int d= (*ptr)(4,6);
    printf("%d\n", sizeof(ptr));
    printf("%d\n", sizeof(a));
    printf("%d\n", &b);
    return 0;
}