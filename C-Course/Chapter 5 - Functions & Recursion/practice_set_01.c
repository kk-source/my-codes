# include<stdio.h>
float average(int a, int b, int c);
    int main(){
int a,b,c;
printf("enter the first no.\n");
scanf("%d", &a);
    
printf("enter the second no.\n");
scanf("%d", &b);
    
printf("enter the third no.\n");
scanf("%d", &c);

printf("the average of entered numbers is %f\n", average(a,b,c));
    return 0;
}
float average(int a, int b, int c){
float avg;
avg= (float)(a+b+c)/3; // or use avg = (a+b+c)/3.0 to get a double answer also.
return avg;
}