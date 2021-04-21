# include <stdio.h>
int main() {
    float radius,height;
    printf(" Radius of cylinder is \n");

    scanf("%f", &radius);

    printf("Height of cylinder is \n");
    scanf("%f", &height);

    printf("The volume of cylinder is %f", 3.14*radius*radius*height);
    return 0;

}