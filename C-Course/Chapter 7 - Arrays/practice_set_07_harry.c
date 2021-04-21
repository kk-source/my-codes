#include<stdio.h>
void printTable(int *a, int num){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<10; i++){
        a[i] = num*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%dX%d = %d\n", num, i+1, a[i]);
    }
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 2);
    printTable(mulTable[1], 7);
    printTable(mulTable[2], 9);

    return 0;
}