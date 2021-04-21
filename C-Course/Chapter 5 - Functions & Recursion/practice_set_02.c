# include<stdio.h>
float temp(int a);
    int main(){int a;
printf("enter the celcius temperature\n");
scanf("%d", &a);
printf("the fahrenheit reading will be %f\n", temp(a));
    return 0;
}
float temp(int a){
    float b= (9/5.0)*a+32;
    return b;
    }