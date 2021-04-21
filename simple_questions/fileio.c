# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("new.txt","w+");//or if it was "w" then file becomes empty immediately after this step.
    
    fputs("kartik",ptr);

    char c=fgetc(ptr);
    printf("%c", c);


    // c=fgetc(ptr);
    // printf("%c", c);
    // c=fgetc(ptr);
    // printf("%c", c);

    return 0;
}