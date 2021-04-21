# include<stdio.h>
# include<string.h>

    int main(){
    char st1[]="fokes";
    char st2[]="foke"; // as after foke nothing is given so ascii value is evaluated as 0.
    int a=strcmp(st1,st2);
    printf("now the a is %d", a);
    return 0;
}