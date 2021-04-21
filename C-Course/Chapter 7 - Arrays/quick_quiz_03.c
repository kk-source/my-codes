# include<stdio.h>
    int main(){
    int arr[3][2];
    for (int i=0; i<3;i++){
        for (int j=0;j<2;j++){
            printf("the value of arr[%d][%d] is \n", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<3;i++){
        printf("{");
        for (int j=0;j<2;j++){
            if(j<1){
            printf("%d,", arr[i][j]);}
            else {
            printf("%d", arr[i][j]);}
            }
        printf("}\n");
        }
       return 0; 
    }
    
