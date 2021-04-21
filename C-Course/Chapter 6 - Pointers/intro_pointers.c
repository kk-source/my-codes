# include<stdio.h>
    int main(){
    int i=8;
    int *j;
    j=&i;
    int **k;
    k=&j; // in the same way more pointer to pointers can be made....
    printf("%u\n", &i); // %u is used to print address.
    printf("%u\n", j);
    printf("%u\n", &j);
    printf("%d\n", i); // %d is used to print value.
    printf("%d\n", *&i);
    printf("%d\n", *j);
    printf("%d\n", *&j);
    printf("%d\n", k);
    printf("%u\n", &k);
    printf("%d", *&k);
    return 0;
} // remember j stores the address of i and the address is
 // not a number. treat it as the address only.
