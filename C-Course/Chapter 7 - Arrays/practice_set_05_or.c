# include<stdio.h> 
void change(int *a, int n){
    for (int i=0; i<n/2; i++){ 
    int temp;
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
}
}
    int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    change(arr,8);
    for (int i=0; i<8; i++){
        printf("%d,", arr[i]);
    }// temp is local variable so as soon as the iteration is ended it temp vanishes 
    // but gifts new values to desired variables.
    return 0;
}