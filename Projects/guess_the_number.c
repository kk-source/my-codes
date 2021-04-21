# include<stdio.h>
# include<stdlib.h>
# include<time.h>
    int main(){

    int num, guess, n=1;
    srand(time(0));
    num =rand()%101;
    
    do{
        printf("Enter a number between 1 and 100\n");
        scanf("%d", &guess);
        if(guess < num){
            printf("the number is too small\n");
        }
        else if(guess > num) {
            printf("the number is too big\n");
        }
        else {break;}
        n++;
    }while(guess!=num);
    printf("you guessed it right in %d attempts\n", n);
    return 0;
}