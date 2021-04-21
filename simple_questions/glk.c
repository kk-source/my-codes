# include<stdio.h>
struct agency{
    char name[10];
};
    int main(){
    struct agency m[2];
        printf("Enter driver name\n");
        scanf("%s", &m[0].name[0]);

        printf("Name of driver is %s \n", m[0].name);
    return 0;
}