# include<stdio.h>
typedef struct c{
    int x;
    int y;
}k;
void display(k c){
    printf("complex no. is %d+%di\n", c.x,c.y);
    }
    int main(){
        k e[5];
    for (int i=0; i<5; i++){
        printf("enter the value of x coord. of %d complex no. :", i+1);
        scanf("%d", &e[i].x);

        printf("enter the value of y coord. of %d complex no. :", i+1);
        scanf("%d", &e[i].y);
    }
    for (int i=0; i<5; i++){
        display (e[i]);
    }
return 0;
}