#include<stdio.h>

int main(){
    float celcius,farenheit;
    printf("Enter the value of celcius to convert it in farenheit:\n");
    scanf("%f",&celcius);
    farenheit = (celcius*9/5) + 32;
    printf("The value in farenheit is: %f /n", farenheit);

    return 0;
}