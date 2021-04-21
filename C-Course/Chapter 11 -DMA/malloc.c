# include<stdio.h>
# include<stdlib.h>
    int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int)); //ptr now becomes an integer array which can store upto 6 values.
    for(int i=0; i<6;i++){ // difference from simple array allocation is that in this case memory is dynamically allocated.
        printf("enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<6;i++){
        printf("the value of %d element is %d\n", i,ptr[i]);
    }
    return 0;
}