# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("practice_set_01_file_or.txt","r");
    printf("numbers are %c\n", fgetc(ptr));
    printf("numbers are %c\n", fgetc(ptr));
    printf("numbers are %c\n", fgetc(ptr)); // remember to use %c and not %d, as fgetc reads a character.
    return 0;
}