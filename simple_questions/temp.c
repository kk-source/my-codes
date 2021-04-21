# include<stdio.h>
# include<string.h>
int palin(int n){
    int num=0;
    while (n!=0){
        num=num*10+n%10;
        n=n/10;
    }
    printf("%d", num);
}
int main(){
    char str[]="1234";
    // printf("%c", str[1]);
    palin(4365);
    return 0;
}
    