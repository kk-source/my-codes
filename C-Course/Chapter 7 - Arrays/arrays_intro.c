# include<stdio.h>
    int main(){
    /* naive way to create 4 similar ints.
    int marks1, marks2, marks3, marks4;
    marks1 =35;
    marks2 =56;
    marks3 =32;
    marks4 =34; */
    int marks[4];  // better way is use arrays.
    marks[0]=35;  // it is similar to a variable whose value is 35;
    marks[1]=56;
    marks[2]=32;
    marks[3]=34;
    return 0;
}