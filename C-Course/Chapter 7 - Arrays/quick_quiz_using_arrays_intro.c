# include<stdio.h>
    int main(){
    int marks[4];
    printf("enter the value of marks for student 1\n");
    scanf("%d", &marks[0]);
    printf("enter the value of marks for student 2\n");
    scanf("%d", &marks[1]);
    printf("enter the value of marks for student 3\n");
    scanf("%d", &marks[2]);
    printf("enter the value of marks for student 4\n");
    scanf("%d", &marks[3]);
    printf("you have entered %d %d %d and %d", marks[0],marks[1],marks[2],marks[3]);
    return 0;
}//through this program we come to know that instead of declaring 4 
// variables we can create an array to account for these 2 variabels.