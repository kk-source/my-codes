# include<stdio.h>
# include<stdlib.h>

    int main(){
    int *ptr,n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0; i<n;i++){ 
        printf("enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n;i++){
        printf("the value of %d element is %d\n", i,ptr[i]);
    }
    return 0;
}