# include<stdio.h>
    int main(){

    char _ ;
    printf("enter the alphabet\n");
    scanf("%c", &_);

    if( _== 'a' || _=='b' || _=='c' || _=='d' || _=='e' || _=='f' || _=='g' || _=='h' || _=='i' || _=='j' || _=='k' || _=='l' || _=='m' || _=='n' || _=='o' || _=='p' || _=='q' || _=='r' || _=='s' || _=='t' || _=='u' || _=='v' || _=='w' || _=='x' || _=='y' || _=='z') {

        printf("entered alphabet is a lowercase alphabet");

    }
    else {
        printf("entered alphabet is a uppercase alphabet");
    }





    return 0;
}