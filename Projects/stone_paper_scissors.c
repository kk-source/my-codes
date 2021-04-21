# include<stdio.h>
# include<stdlib.h>
# include<time.h>
    int main(){
    int num;
    char guess[10];
    srand(time(0));
    num =rand()%3;
    
    printf("enter your choice\n");
    scanf("%s", guess);
    if (num==0){
    if ("stone"==guess){
        printf("draw");
    }
    else if ("paper"==guess){
        printf("you won");
    }
    else{ printf("you lost");
    }
    }

    else if (num==1){
    if ("stone"==guess){
        printf("you lost");
    }
    else if ("paper"==guess){
        printf("draw");
    }
    else{ printf("you won");
    }
    }

    else if (num==2){
    if ("stone"==guess){
        printf("you won");
    }
    else if ("paper"==guess){
        printf("you lost");
    }
    else{ printf("draw");
    }
    }
    return 0;
}