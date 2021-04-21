# include<stdio.h>
    int main(){
    // 97-122 = a-z ascii table.
    char a;
    printf("enter the alphabet \n");
    scanf("%c", &a);

    if (a<=122 && a>=97){
        printf("the entered alphabet is lowercase");
    }
    else {
        printf("the entered alphabet is not lowercase");
    }


    return 0;
}