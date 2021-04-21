# include<stdio.h>
    int main(){
    int i, j=0;
    for (i=1; i<=10;i++){
        j+=i;
    }
    printf("the sum of first 10 natural numbers is %d\n",j);
    i=1;
    j=0;
    do {
        j+=i;
        i++;
    }while(i<=10);
    printf("the sum of first 10 natural numbers is %d",j);

    return 0;
}