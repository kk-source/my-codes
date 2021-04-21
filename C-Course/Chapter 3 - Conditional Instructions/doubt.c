# include<stdio.h>
    int main(){

    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);

    switch(marks){
        case 90-100:
        printf("A grade\n");
        break;

        case 80-90:
        printf("B grade\n");
        break;

        case (70):
        printf("C grade\n");
        break;

        case (60):
        printf("D grade\n");
        break;

        default:
        printf("E grade");
        break;
    }
       return 0;
}