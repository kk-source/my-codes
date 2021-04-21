# include<stdio.h>
void tabla(int *a, int b){
printf("the multiplication table of %d is : \n", b);
for (int i=0; i<10 ; i++){
    a[i]=b*(i+1);
}
for (int i=0;i<10;i++){
       printf("%d\n",a[i]);
    }
    printf("************************************\n\n");
}
int main(){
    int arr[3][10];
    int a,b,c;
    printf("enter the value of number 1\n");
    scanf("%d", &a);
    printf("enter the value of number 2\n");
    scanf("%d", &b);
    printf("enter the value of number 3\n");
    scanf("%d", &c);

    tabla(arr[0], a);
    tabla(arr[1], b);
    tabla(arr[2], c);
    return 0;
}