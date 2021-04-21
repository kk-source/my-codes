# include<stdio.h>
    int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr1[11]={1,2,3,4,5,6,7,8,9,10,11};
    int *a,*b;
    a=arr;
    b=arr;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",*a);
    a+=3;
    printf("%d\n", *a);
    a-=2;
    printf("%d\n", *a);
    printf("%d\n", a-b);
    if (a==b){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}