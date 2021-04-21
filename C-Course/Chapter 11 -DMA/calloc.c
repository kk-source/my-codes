# include<stdio.h>
# include<stdlib.h>
    int main(){
    int *ptr;
    ptr = (int *) calloc(6,sizeof(int)); // by default initialises all the 6 blocks with 0 value.
    // for(int i=0; i<6;i++){
    //     printf("enter the value of %d element\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    ptr[5]=1;
    for(int i=0; i<6;i++){
        printf("the value of %d element is %d\n", i,ptr[i]);
    }
    return 0;
}