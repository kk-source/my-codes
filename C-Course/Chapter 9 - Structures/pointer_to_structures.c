# include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
    int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=100;
    printf("%d\n", (*ptr).code);
    ptr->code=34;
    printf("%d", ptr->code);
    return 0;
}