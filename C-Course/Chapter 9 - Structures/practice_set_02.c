# include<stdio.h>
typedef struct vector{
    int x;
    int y;
}k; 
k sumvector(k v1,k v2){
    k result;
    result.x= v1.x+v2.x;
    result.y=v2.y+v1.y;
return result;
}
    int main(){
    k v1={23,34};
    k v2;
    v2.x=24;
    v2.y=35;
    sumvector(v1,v2);// or use k sum = sumvector(v1,v2) and then in printf use sum.x and sum.y
    printf("X dim of result is %d, Y dimension is %d", sumvector(v1,v2).x,sumvector(v1,v2).y);
    return 0;
}