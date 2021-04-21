# include<stdio.h>
    int main(){

    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);

    if(marks<=100 && marks>=90) {
        printf("you have secured A grade\n");
    }
    if(marks<90 && marks>=80) {
        printf("you have secured B grade\n");
    }
    if(marks<80 && marks>=70) {
        printf("you have secured C grade\n");
    }
    if(marks<70 && marks>=60) {
        printf("you have secured D grade\n");
    }
    if(marks<60) {
        printf("you have secured E grade\n");
    }

   return 0;
}