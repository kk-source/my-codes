# include<stdio.h>
    int main(){
    int n_students=3;
    int n_subjects=5;

    int marks[5][3];

    for(int j=0;j<n_students;j++){
        for(int i=0; i<n_subjects;i++){
            printf("marks obtained by %d student in subject %d is \n", j+1,i+1);
            scanf("%d", &marks[j][i]);
        }
    }
    for(int j=0;j<n_students;j++){
        for(int i=0; i<n_subjects;i++){
            printf("marks obtained by %d student in subject %d is : %d\n", j+1,i+1,marks[j][i]);
            
        }
    }
    return 0;
}