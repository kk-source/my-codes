# include<stdio.h>
typedef struct dates{
    int date; 
    int month;
    int year;
}k;
void display(k a,k b){
    if (a.date==b.date&&a.month==b.month&&a.year==b.year){
        printf("the dates match!!");
    }
    else {
        printf("the dates do not match!!");
    }
}
    int main(){
    k t1={21,10,2020};
    k t2={22,10,2020};
    printf("today's date is %d-%d-%d\n", t1.date,t1.month,t1.year);
    printf("tomorrow's date is %d-%d-%d\n", t2.date,t2.month,t2.year);
display(t1,t2);
    return 0;
}