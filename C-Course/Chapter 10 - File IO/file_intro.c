# include<stdio.h>
    int main(){
    FILE *ptr;
    ptr = fopen("sample.txt", "r");// open to read file.
    // ptr = fopen("sample.txt", "w");// open to write file.
    return 0;
}