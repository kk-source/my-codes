# include<stdio.h>
typedef struct emp{
    char name[29]; // dont use char *name 
    int salary;
}kk;
    int main(){kk e1,e2; // structure helps keep less variables.
    printf("enter the name of first employee\n");
    scanf("%s", &e1.name);
    printf("enter his salary\n");
    scanf("%d", &e1.salary);
    printf("enter the name of second employee\n");
    scanf("%s", &e2.name);
    printf("enter his salary\n");
    scanf("%d", &e2.salary);
    FILE *ptr;
    ptr=fopen("practice_set_04_output.txt", "w");
    fprintf(ptr, "%s, %d\n", e1.name, e1.salary);
    fprintf(ptr, "%s, %d\n", e2.name, e2.salary);
    fclose(ptr);
    return 0;
}