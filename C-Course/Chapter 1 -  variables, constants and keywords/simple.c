# include<stdio.h>
int main() {
    int P;
    float R,T;

    printf("The value of Principal is \n\n");
    scanf("%d", &P);

    printf("The value of rate is \n");
    scanf("%f", &R);
    
    printf("The value of Time Period is \n");
    scanf("%f", &T);

    printf("Simple interest will be %f", ((P*R*T)/100) );
    return 0;
}