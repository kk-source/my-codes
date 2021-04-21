# include<stdio.h>
    int main(){

    int s=5;
    int i=0;
     
    while(i<10) {
        i++;
     if (i == s){continue;}
     else{printf("%d\n", i);
     }
    }

    return 0;
}