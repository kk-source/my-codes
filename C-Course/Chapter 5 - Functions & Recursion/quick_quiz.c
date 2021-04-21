# include<stdio.h>
    void goodmorning();
    void goodafternoon();// prototypes can be in any order
    void goodnight();
    int main(){
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void goodmorning(){
    printf("Good Morning\n");
}
void goodafternoon(){
    printf("Good Afternoon\n");
}
void goodnight(){
    printf("Good Night\n");
}