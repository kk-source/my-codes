# include<stdio.h>
    int main(){
    int marks[4];
    printf("%d\n", marks);
    printf("%d\n", &marks[0]);
    int *a= marks; // can write only &marks[0] also after =.
    printf("%d\n", a);
    for (int i=0; i<4; i++){
        printf("enter the marks of student %d\n", i+1);
        scanf("%d", a);
        a++;
    }
    for (int i=0; i<4; i++){
        printf("marks secured by student %d is %d\n", i+1, marks[i]);
    }
    return 0;
}