# include<stdio.h>
void encrypt(char *a){
    for (int i=0; a[i]!='\0';i++){
    a[i];
    printf("%d\n", a[i]);
    a[i]=a[i]+1;
    }
}
    int main(){
    char a='b';
    printf("%d\n", a);
    char b[]="kartik singh"; // cannot be '*b=' as it occupies read only memory.
        encrypt(b);
    printf("encrypted string is %s",b);
    return 0;
}