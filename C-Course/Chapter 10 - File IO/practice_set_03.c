# include<stdio.h>
    int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("practice_set_03_file.txt", "r");
    ptr1=fopen("practice_set_03_output.txt", "w");
    char c=fgetc(ptr);
    while(c!=EOF){ // as many times you write fgetc(ptr), that many times it takes consequent character.
    fputc(c, ptr1);
    fputc(c, ptr1);
    c=fgetc(ptr);
    }
    return 0;
}