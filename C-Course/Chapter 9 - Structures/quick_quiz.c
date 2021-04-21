# include<stdio.h>
# include<string.h>

struct employee{
    int code;
    float salary;
    char *name;// or write char name[10];
};
int main(){
    struct employee e1,e2,e3;

    printf("enter the name of first employee\n");
    scanf("%s", e1.name);
    printf("%s", e1.name);
    printf("enter the code of first employee\n");
    scanf("%d", &e1.code);
    printf("enter the salary of first employee\n");
    scanf("%f", &e1.salary);
    
    
    printf("enter the name of second employee\n");
    scanf("%s", e2.name);
    printf("enter the code of second employee\n");
    scanf("%d", &e2.code);
    printf("enter the salary of second employee\n");
    scanf("%f", &e2.salary);
    
    printf("enter the name of third employee\n");
    scanf("%s", e3.name);
    printf("enter the code of third employee\n");
    scanf("%d", &e3.code);
    printf("enter the salary of third employee\n");
    scanf("%f", &e3.salary);
    return 0;
}