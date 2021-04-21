# include<stdio.h>
    int main(){
    FILE *ptr;
    int num=5;
    ptr=fopen("file.txt","w");
    fprintf(ptr,"the multiplication table of %d is \n", num);
    for (int i=1; i<=10; i++){
        fprintf(ptr, "%dX%d=%d\n", num, i, i*num);
    }
    return 0;
}