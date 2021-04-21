# include<stdio.h>
void decrypt(char *a){
    for (int i=0; a[i]!='\0';i++){
    a[i];
    printf("%d\n", a[i]);
    a[i]=a[i]-1;
    }
}
    int main(){
    char a='b';
    printf("%d\n", a);
    char b[]="lbsujl!tjohi"; 
        decrypt(b);
    printf("decrypted string is %s",b);
    return 0;
}