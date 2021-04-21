# include<stdio.h>
    int main(){
    int i=2;
    int *j=&i; // j is a pointer to integer.
    int **k=&j;  // k is a pointer to a pointer.
    printf("%u\n", *(*k));
    return 0;
}