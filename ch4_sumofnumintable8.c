#include<stdio.h>

int main(){
    int i = 1;
    int n;
    // printf("Enter the number n:\n");
    // scanf("%d",&n);

    int sum = 0;
    while(i<=10){

         sum = 8*i + sum;
         i++;
    }
   printf("The sum of first 10 number in multiplication table of 8 is %d\n ",sum);


    return 0;
}