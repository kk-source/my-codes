# include<stdio.h>
    int main(){
    FILE * ptr;
    ptr = fopen("integer.txt", "r");
    if (ptr==NULL){
        printf("this file does not exist");
    }
    else {
        printf("this file exists");
    }
    return 0;
}