# include<stdio.h>

struct vector{
    float xcoord;
    float ycoord;
};
    int main(){
        struct vector e1;
    printf("enter the x coordinate of the point\n");
    scanf("%f", &e1.xcoord);

    printf("enter the y coordinate of the point\n");
    scanf("%f", &e1.ycoord);

    printf("the x and y coordinate of the points are %.3f,%.3f\n", e1.xcoord, e1.ycoord);
    return 0;
}