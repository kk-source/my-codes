# include<stdio.h>
    int main(){
    char c='a';// or leave c only without giving it any value.
    char *ptr=&c;
    printf("The value of ptr is %u\n", ptr);
    printf("the value of c is %c\n", c);
    ptr+=3;
    printf("The value of ptr is %u\n", ptr);
    ptr-=3;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}