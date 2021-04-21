# include<stdio.h>
typedef struct employee{
    int code;
    float salary;
    char *name;
}kk; // kk=struct employee;
void details(struct employee a){
    printf("the name of the employee is %s\n", a.name);
    printf("the code of the employee is %d\n", a.code);
    printf("the salary of the employee is %f\n", a.salary);
    printf("\n\n");
}
    int main(){
        kk f={100,23.334,"kartik"};
    details(f);
    kk g;
    g.name="kartik";
    g.code=101;
    g.salary=3.4;
    printf("the name of the employee is %s\n", g.name);
    printf("the code of the employee is %d\n", g.code);
    printf("the salary of the employee is %f\n", g.salary);

    return 0;
}