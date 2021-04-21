# include<stdio.h>
    int main(){
    // char str[] = {'H', 'a', 'r', 'r', 'y','\0'};
    char str[] = "Harry singh"; // in C null character is added automatically.
    for (int i=0; i<7; i++){
        printf("the address of str[%d] is %d\n", i, &str[i]);
    }
    
    return 0;
}