// Develop a C program to enter a number and calculate the sum of its digits.

#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter any number: \n");
    scanf("%d",&n);
    while(n>0){
        int r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("The sum of the digit of the given number is : %d",sum);


    return 0;
}