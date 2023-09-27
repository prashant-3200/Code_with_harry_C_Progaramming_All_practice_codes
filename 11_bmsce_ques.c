// Develop a program to calculate the sum of squares of first n odd numbers


#include<stdio.h>

int main(){
    int a;
    int i= 1;
    int p = 1;
    int sum = 1;
    printf("Please enter any number: \n");
    scanf("%d",&a);
    while(i<a){
        p += 2;
        sum += p*p;
        i++;
     }
   
    printf("Sum of squares of first %d odd numbers: %d",a,sum);
    return 0;
}