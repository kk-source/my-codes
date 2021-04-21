# include<stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age==18){
        printf("you can drive");

    }
    else if (age==90){
        printf("you cannot drive");
    }
    else if(age==17){
        printf("you are yet to drive");
    } 
    else if(age==100){
        printf("pagal drive karega");
    } 
    return 0;
}