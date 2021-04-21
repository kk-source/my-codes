# include<stdio.h>
# include<string.h>
struct employee{
    int code;
    float salary;
    char *name;// or write char name[10];
};
    int main(){
    struct employee e[100];

    e[0].code=100;
    e[0].salary=15.33;
    e[0].name="kartik";

    e[1].code=101;
    e[1].salary=16.33;
    strcpy(e[1].name,"harry");

    return 0;
}