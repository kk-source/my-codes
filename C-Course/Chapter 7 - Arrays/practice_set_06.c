# include<stdio.h>
void count(int *a, int n, int *j){ // j=&sum;
    int k=0;
    for (int i=n-1;a[i]>0;i--){
    k++;
    }
    *j=k;
}
    int main(){
    int arr[16]={-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,10};
    int sum;
    count(arr,16, &sum);
    printf("total number of positive integers in above array is %d",sum);
    return 0;
}