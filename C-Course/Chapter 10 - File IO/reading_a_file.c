# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("integer.txt", "r");
    int num;
    int num2;
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num);// fscanf is to read values from a file.
    fclose(ptr); // i have closed reading the file.
    printf("the value of num2 is %d\n", num2);
    printf("the value of num is %d", num);
    return 0;
}