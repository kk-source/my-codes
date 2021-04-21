# include<stdio.h>
    void mystrcpy(char *a,char *b){
        int i=0;
    for (i; b[i]!='\0';i++){
        a[i]=b[i];
    }
    a[i]='\0';
    }

    int main(){
    char st1[]="kartik";
    char *st2;
    mystrcpy(st2,st1);
    printf("Now st2 is %s", st2);
    return 0;
}