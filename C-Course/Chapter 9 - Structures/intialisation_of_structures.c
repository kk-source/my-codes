# include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
        int main(){
        struct employee f={199,23.2,"kartik"};
        
        printf("%d\n", f.code);
        printf("%f\n", f.salary);
        printf("%s\n", f.name);
    
        return 0;
    }