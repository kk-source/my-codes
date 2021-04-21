# include<stdio.h>
    int main(){
    FILE * kk;
    int num =12;
    kk=fopen("kartik.txt", "w");
    fprintf(kk, "add these lines\n");
    fprintf(kk, "also add the number %d\n", num);
    return 0;
}