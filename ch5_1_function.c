#include<stdio.h>
void goodMorning();
void goodAfternoon();   // Function prototype
void goodNight();

int main(){
    goodMorning();
    goodAfternoon();    // Function call
    goodNight();
    return 0;
}
void goodMorning(){
    printf("Good morning Prashant\n");
}
void goodAfternoon(){
    printf("Good afternoon Prashant\n");
}
void goodNight(){
    printf("Good Night Prashant\n");
}
