# include<stdio.h>
# include<stdlib.h>

    int main(){
    float *ptr;
    ptr=(float *) malloc(4* sizeof (float)); //this creates a float array.
    for(int i=0;i<4;i++){
        printf("enter the %d float value\n",i);
        scanf("%f", &ptr[i]);
    }

    for(int i=0;i<4;i++){
        printf("%d float value is %f\n", i,ptr[i]);
    }
    return 0;
}