# include<stdio.h>
// void printarray(int *ptr, int n){
//     for (int i=0; i<n; i++){
//         printf("the value of element %d is %d\n",i+1, *(ptr+i));
//     }
// }
// void printarray(int ptr[], int n){
//     for (int i=0; i<n; i++){
//         printf("the value of element %d is %d\n",i+1, *(ptr+i));
//     }
// }
// void printarray(int *ptr, int n){
//     for (int i=0; i<n; i++){
//         printf("the value of element %d is %d\n",i+1, ptr[i]);
//    }
//    ptr[2]=5555; // value will be changed because function is called by address.
// }
void printarray(int ptr[], int n){
    for (int i=0; i<n; i++){
        printf("the value of element %d is %d\n",i+1, ptr[i]);
    }
    ptr[2]=5555; // value will be changed because function is called by address.
}
    int main(){
    int arr[] ={1,2, 3543, 34,54,56,223};
    printarray(arr, 7);
    printf("%d\n", arr[2]);
    return 0;
}