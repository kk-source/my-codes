# include<stdio.h>
    int main(){

    int rating, stars;

    printf("enter your rating\n");

    scanf("%d", &rating);

    printf("enter no. of stars\n");

    scanf("%d", &stars);

    switch(stars){
        case 1: // 1 here denoted stars.
        if ( rating == 1) {
        printf("your rating is 1\n");
        }
        break;
        
        case 2:
        if  ( rating == 2)  {
        printf("your rating is 2\n");
        }
        break;

        case 3:
        if  ( rating == 3) {
        printf("your rating is 3\n");
        }
        break;

        case 4:
        if  ( rating == 4) {
        printf("your rating is 4\n");
        }
        break;

        case 5:
        if  ( rating == 5) {
        printf("your rating is 5\n");
        }
        break;

        default:
        if  ( rating == 2) {
        printf("invalid rating\n");
        }
        break;

    }

    return 0;
}