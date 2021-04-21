# include<stdio.h>
# include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

    int main(){
        int a=34;
        char b='g';
        float d=234.3543;

        struct employee f;
        f.salary=34.454;
        f.code=100;
        strcpy(f.name,"Harry"); // you can use f.name = "Harry" only if you had entered int *name above because it is assignable.
        // strcpy(f.name,"Harry");

        struct employee g;
        g.salary=34.454;
        g.code=10;
        strcpy(g.name,"Harry");

        printf("%d\n", g.code);
        printf("%f\n", f.salary);
        printf("%s\n", f.name);
    
    return 0;
}