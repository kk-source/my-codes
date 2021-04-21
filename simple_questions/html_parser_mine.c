# include<stdio.h>
# include<string.h>
void parser(char *ptr){
    int k=strlen(ptr)-1;
    for (;ptr[k]!='<';k--){
    }
    do{
        k--;
        }while(ptr[k]==' ');

    
    int i=0;
    for(;ptr[i]!='>';i++){
    }
    int a=i+1;
    for (;ptr[a]==' ';a++){
    }
    for (;a<=k;a++){
        printf("%c", ptr[a]);
    }
}
int main(){
char kar[]="<h1>        This is a heading     </h1>";
int a=strlen(kar);
parser(kar);
printf("a");
return 0;
} 