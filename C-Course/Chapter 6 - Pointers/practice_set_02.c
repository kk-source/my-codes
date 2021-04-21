# include<stdio.h>
    void address(int a);
    int main(){
    int i;
    printf("the address of i is %u\n", &i);
    address(i);
    return 0;
}
void address(int a){
    printf("the address of i is %u", &a);
}