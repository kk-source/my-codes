# include<stdio.h>
    void goodmorning();
    void goodafternoon();
    void goodnight();
    int main(){
    goodmorning();// goodmorning called directly
    return 0;
}
void goodmorning(){
    printf("Good Morning\n");
    goodafternoon(); //goodafternoon called indirectly
}
void goodafternoon(){
    printf("Good Afternoon\n");
    goodnight();//goodnight called indirectly
}
void goodnight(){
    printf("Good Night\n");
}