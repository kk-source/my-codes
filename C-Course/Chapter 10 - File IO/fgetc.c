# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("new.txt", "r");
    char c=fgetc(ptr); // used to read a (only one) character from file.
    printf("the value of my character is %c\n",c); // c stored as t only.
    printf("the value of my character is %c\n", fgetc(ptr));// in this way each of these lines gets a different character.
    printf("the value of my character is %c\n", fgetc(ptr));// or can say that fgetc(ptr) is used to read a file character by character.
    printf("the value of my character is %c\n", fgetc(ptr));// jitne baar fgetc(ptr) likha utne baar values read hoti jayengi.
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    return 0;
}