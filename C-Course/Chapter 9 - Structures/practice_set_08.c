# include<stdio.h>
typedef struct bank{
    char *name;
    int account;
    float balance;
}k;
    int main(){
        k k={"kartik", 1283,34.34};
        printf("account no. and balance in %s's account is %d and %f\n",k.name,k.account, k.balance);
    
    return 0;
}