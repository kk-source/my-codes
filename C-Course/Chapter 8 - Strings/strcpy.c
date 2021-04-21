# include<stdio.h>
# include<string.h>
    int main(){
    char st1[]="This";
    char st2[10]="is"; // or don't write "is";
    strcpy(st2,st1);
    printf("now the st2 is %s", st2);
    return 0;
}