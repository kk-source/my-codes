# include<stdio.h>
    int main(){

    int i=0;
    do {
        printf("the value of i is %d\n", i);

        i++;

        if(i==4){break;}
        
    } while (i<10);

    return 0;
}