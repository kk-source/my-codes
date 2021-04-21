# include<stdio.h>
    int main(){

    int rating;

    printf("enter your rating\n");

    scanf("%d", &rating);

    if(rating==1) {
     printf("your rating is 1");
    }
    else if(rating==2) {
        printf("your rating is 2");
    }
    else if(rating==3) {
        printf("your rating is 3");
    }
    else if(rating==4) {
        printf("your rating is 4");
    }
    else if(rating==5) {
        printf("your rating is 5");
    }
    else {
        printf("invalid rating");
    }

    return 0;
}