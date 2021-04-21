# include<stdio.h>
    int main(){
    // int i;
    // int*j=&i;
    // printf("The value is %u\n", j);
    // j+=2;
    // printf("The value is %u\n", j);
    // printf("The value is %u\n", &j);
    // int **k=&j;
    // k++;
    // printf("The value is %u\n", k);
    // int i;
    // int*j=&i;
    // printf("The value is %u\n", j);
    // j-=589750;
    // printf("The value is %u\n", j);// u for only (+ve) values
    // j--;
    // printf("The value is %d\n", j);// d for both (+ve) and (-ve) values
    int i=4;
    int *j=&i;
    int **k=&j;
    printf("%d\n", j);
    printf("%d\n", &j);
    printf("%d\n", &k);
    printf("%d", j-&j);
    // int i=4;
    // int *j=&i;
    // int **k=&j;
    // printf("%d\n", j);
    // printf("%d\n", &j);
    // printf("%d\n", &k);
    // if (j==k){
    //     printf("yes");
    // }
    // else {
    //         printf("no");
    // }
    return 0;
}