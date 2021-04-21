# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("for_EOF.txt","r");
    char c=fgetc(ptr); // use fgetc(ptr) carefully because 
    // jitne baar likha utne baar read ho jaata hai.
    while(c!=EOF){
        printf("%c", c);
        c=fgetc(ptr);
        }
        printf("\n");
        printf("%c", c); // null character which is EOF.
        fclose(ptr);
    return 0;
}