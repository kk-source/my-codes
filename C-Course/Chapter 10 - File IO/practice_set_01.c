# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr=fopen("practice_set_01_file.txt", "r");
    int a,b,c;
    // fscanf(ptr, "%d", &a);
    // fscanf(ptr, "%d", &b);
    // fscanf(ptr, "%d", &c);
    fscanf(ptr, "%d","%d","%d" ,&a,&b,&c); // this is better.
    printf("the no.'s are %d %d %d", a,b,c);
    return 0;
}