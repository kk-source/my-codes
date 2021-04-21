# include<stdio.h>
# include<stdlib.h>
    int main(){
    int*ptr;
    ptr=(int *)calloc(5,sizeof(int));
    realloc(ptr,(10,sizeof(int)));
    return 0;
}