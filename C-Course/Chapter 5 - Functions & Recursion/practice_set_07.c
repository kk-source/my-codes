# include<stdio.h>
void print(int n);
    int main(){
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    print(n);
     return 0;
}
void print(int n){
if (n==1){
    printf("*\n"); // \n is used here because in next line return statement is used which will 
    //direct the control to return 0 in the main function as it is the last step of the function call.  

    return;// if this return statement was not here there would be no use of \n in above line because
    // the function would have executed printf("\n") before executing return 0 in main function.
}
else{ // it will work even if else is not used here in this line.
print(n-1);
int i=1;
while(i<=(2*n-1)){
    printf("*");
    i++;
}
}
printf("\n");
return;} // though program will work even if return is not written but it is a good practice.
    
 
