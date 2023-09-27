// 2. Develop a C program to find an average of three integers using functions.

#include<stdio.h>
float avg(int a, int b, int c){
    float average;
    average = (float)(a+b+c)/3;
    return average;
}
int main(){

    int a,b,c;
    printf("Enter the values of all three numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The value of average of all three number is : %f",avg(a,b,c));
    return 0;
}