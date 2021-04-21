# include<stdio.h>
    int main(){
    char st[]="kartik";
    char c;
    printf("enter a character\n");
    scanf("%c", &c);
    int z=0;
    for (int i=0; st[i]!='\0'; i++){
    if(c==st[i]){z++;}
    }
    printf("entered alphabet occured %d times in above string", z);
    return 0;
}
