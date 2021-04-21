# include<stdio.h>
void slice(char *a,char *b,int m,int n){
    int i=0;
for (i;m!=n-1;i++,m++){
    b[i]=a[m];
}
b[i]='\0';
}
int main(){
    char string[]="kartiksinghkushwah";
    char ptr[133];
    slice(string,ptr,3,10);
    printf("the sliced string is %s", ptr);
    return 0;
}