// what's wrong in this code??
#include<stdio.h>

int main(){
    int leapyear;
    printf("Enter year:\n");
    scanf("%d\n",&leapyear);


    if(((leapyear % 4 == 0) && !(leapyear % 100 == 0)) || (leapyear % 100 == 0 && leapyear % 400 == 0)){
        printf("It's a leap year\n");


    }
    // else if(leapyear % 100 == 0 && leapyear % 400 == 0){
    //     printf("It's a leap year\n");

    // }
    else{
        printf("It's not a leap year\n");
    }

    return 0;
}