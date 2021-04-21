# include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void details(struct employee a){
    printf("the name of the employee is %s\n", a.name);
    printf("the code of the employee is %d\n", a.code);
    printf("the salary of the employee is %f\n", a.salary);
}
    int main(){
        struct employee f={100,23.334,"kartik"};
    details(f);
    return 0;
}