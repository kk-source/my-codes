# include<stdio.h>
    int main(){

    float income;
    printf("enter your income (in lacs)\n");
    scanf("%f", &income);

    if (income>=2.5 && income<5) {
        printf("tax paid by you is \n %f lacs", 0.05*(income-2.5) );
    }
    else if (income>=5 && income<10) {
        printf("tax paid by you is \n %f lacs", 0.2*(income-5));
    }   
    else if (income>10) {
        printf("tax paid by you is \n %f lacs", 0.3*(income-10));
    } 
    else {
        printf("you are tax free");
    }
    return 0;

    }