# include<stdio.h>
    int main(){
    char st[]="kartik";
    char c;
    printf("enter a character\n");
    scanf("%c", &c);
    for (int i=0; st[i]!='\0'; i++){
        if (c!=st[i]){
            if (st[i+1]=='\0'){printf("entered character is not present in above string");}
            else{continue;}
        }
        else{
            printf("entered character is present in above string");
                break;}
    }
    return 0;
}