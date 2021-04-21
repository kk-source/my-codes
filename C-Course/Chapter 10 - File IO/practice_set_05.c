# include<stdio.h>
    int main(){
    FILE *ptr; // remember you cann't open a file in two modes (read and write let) simultaneously
    int a;
    ptr=fopen("practice_set_05_file.txt", "r");
    fscanf(ptr, "%d", &a);
    fclose(ptr);
    ptr=fopen("practice_set_05_file.txt", "w");
    fprintf(ptr, "%d", 2*a);
    fclose(ptr);
    return 0;
}