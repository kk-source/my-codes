# include<stdio.h>
# include<stdlib.h>
int main(){     
    int a,b,c,d;
    printf("enter number of rows in matrix 1\n");
    scanf("%d", &a);
    printf("enter the number of columns in matrix 1\n");
    scanf("%d", &b);
    printf("enter number of rows in matrix 2\n");
    scanf("%d", &c);
    printf("enter the number of columns in matrix 2\n");
    scanf("%d", &d);
    if (b!=c){printf("multiplication is not possible\n");
    return 0;}
    int e[a][b],f[c][d];
    printf("For matrix 1 :\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("enter %d row's %d column's value\n", i+1,j+1);
            scanf("%d", &e[i][j]);
        }
    }
    printf("For matrix 2 :\n");
    for (int i=0;i<c;i++){
        for (int j=0;j<d;j++){
            printf("enter %d row's %d column's value\n", i+1,j+1);
            scanf("%d", &f[i][j]);
        }
    }
    // int q=0;
    printf("Matrix Multiplication from left to right is :\n");
    for (int i=0;i<a;i++){
       for (int j=0;j<d;j++){ 
       int p=0;
       for (int k=0;k<c;k++){ 
       p+=((e[i][k])*(f[k][j]));
       }
       printf("%d\t", p); 
       }
       printf("\n");
    }
    return 0;
}