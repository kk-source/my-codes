# include<stdio.h>
int area (int a);
    int main(){int a;
printf("enter the side of the square\n");
scanf("%d", &a);
area (a);
    return 0;
}
int area (int a){
    int d=a*a;
    printf("area of the square is %d",d);
} /* or do it simple as follows
# include<stdio.h>
# include<math.h>
    int main(){int a;
printf("enter side\n");
scanf("%d", &a);
printf("the area of square is %f\n", pow(a,2));   %f because pow returns a double value
return 0;
} */