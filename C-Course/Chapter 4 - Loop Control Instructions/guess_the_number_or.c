# include<stdio.h>
# include<stdlib.h>
# include<time.h>
    int main(){

    int num, guess, n=1;
    srand(time(0));
    num =rand()%100+1; //+1 is used to include 100 also and this line generates a random number between 1 and 100.
    // printf("The guessed number is %d\n", num);

    do{
        printf("Enter a number between 1 and 100\n");// cannot use while loop or for loop as we have to give atleast one chance to the user.
        scanf("%d", &guess);
        if(guess < num){
            printf("the number is too small\n");
        }
        else if(guess > num) {
            printf("the number is too big\n");
        }
        else {printf("you guessed it right in %d attempts\n", n);}
        n++;
    }while(guess!=num);
    
    return 0;
}