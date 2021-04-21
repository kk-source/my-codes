# include<stdio.h>
typedef struct integer{
    int a;
    int b;
}k;
    int main(){
        k e1={2,3};
    k *ptr;
    ptr =&e1;
    printf("%d\n%d\n\n", (*ptr).a,(*ptr).b);
    printf("%d\n%d", ptr ->a,ptr->b);
    return 0;
}