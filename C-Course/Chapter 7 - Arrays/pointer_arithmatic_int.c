# include<stdio.h>
    int main(){
    int i=4; // or simply write i only without giving it a value.
    int *ptr= &i;
    printf("The value of ptr is %d\n", ptr);
    ptr++; // value will increment by 4 as size of integer in this architecture is 4.
    printf("The value of ptr is %d\n", ptr);
    ptr+=3;
    printf("The value of ptr is %d\n", ptr);
    return 0;
}