# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("put_demo.txt","w");
    int d=7;
    char c='k';
    fputc('c',ptr); // if file exists then contents will be overwritten and c will be printed.
    fputc(c,ptr); // first argument must be a character and fputc can be used to write only one character.
    fputc(d,ptr);
    fclose(ptr);// better to close the file after use.
    return 0;
}