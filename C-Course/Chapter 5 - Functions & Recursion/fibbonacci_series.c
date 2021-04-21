# include<stdio.h>
int fib(int n);
    int main(){
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
    printf("%d,", fib(i));
    }
    return 0;
}
int fib(int n) {

    if (n==1) {int a=0;
    return a;
    }
    else if (n==2){int a=1;
    return a;
    } 
    else{ int b;
    b= fib(n-1)+fib(n-2);
    return b;
    }
    
    }
    
    

