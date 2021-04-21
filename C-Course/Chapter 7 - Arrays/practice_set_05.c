# include<stdio.h>
void change(int *a, int n);
    int main(){
    int marks[7]={1,2,3,4,5,6,7};
    change(marks,7);
    for (int i=0; i<7; i++){
        printf("%d,", marks[i]);
    }
    return 0;
}
void change(int *a, int n) {
for (int i=0; i<n/2; i++){//n/2 will be 3 as it is arithmatic operation b/w two integers.
    int temp;
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
    } // temp is local variable so as soon as the iteration is ended it temp vanishes 
    // but gifts new values to desired variables.
}