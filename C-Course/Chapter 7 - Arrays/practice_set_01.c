# include<stdio.h>
    int main(){
    int arr[10];
    int*ptr= arr; // or write &arr[0];
    printf("the address of arr[0] is %u\n", ptr);
    printf("the address of arr[2] is %u\n", ptr+2);
    ptr+=2;
    if (ptr==&arr[2]){
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}