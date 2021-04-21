# include<stdio.h>
void sumavg(int a,int b, int *c, float *d);
    int main(){
    int a=2, b=3, sum;
    float avg;
    sumavg(a,b,&sum,&avg);
    printf("sum is %d\n", sum);
    printf("average is %f\n", avg);
    return 0;
}
void sumavg(int a,int b, int *c, float *d){
*c=a+b;
*d=(a+b)/2.0;
}