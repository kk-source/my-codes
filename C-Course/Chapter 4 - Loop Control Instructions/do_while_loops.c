# include<stdio.h>
    int main(){

    // it is similar to while loop

    int i = 3;

    /* syntax is 
    do {
        statement;
    } while (condition); */

    do {
        printf("the value of i is %d\n", i);
        i++;
    }
    while(i<10);

    return 0;
}