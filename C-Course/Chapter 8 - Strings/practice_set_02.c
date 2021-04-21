# include<stdio.h>
# include<string.h>
    int main(){
    char sr1[12];
    char sr2[12];
    int a;
    printf("enter string 1 : ");
    scanf("%s", sr1);

    printf("enter string 2 character by character\n");
    for (int i=0; ;i++){
        fflush(stdin);
        scanf("%c", &sr2[i]);
        a=i;
        if(sr2[i]=='\n'){break;}
    }
    sr2[a]='\0'; /* in square brackets it is not a-1 because in string 1
    there is a \0 at last (after the word entered e.g. this\0) as it is
    automatically added by scanf functionand so to get strcmp 0 string 2 
    should also have a \0 at last and so a is last character index.*/
    
    printf("string 1 is %s\n", sr1);
    printf("string 2 is %s\n", sr2);
    printf("strcmp for these strings returns %d", strcmp(sr1,sr2));
    return 0;
}