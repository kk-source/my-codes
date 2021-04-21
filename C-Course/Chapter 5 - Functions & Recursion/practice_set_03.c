# include<stdio.h>
float force(float m);
    int main(){
        float m;
        printf("enter the value of m (in kgs)\n");
        scanf("%f", &m);
printf("the force exerted on this mass by earth is %.2f N\n", force(m));
    return 0;
}
float force(float m){
float b= m*(9.8);
    return b;
}