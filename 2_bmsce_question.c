// Write the program to find the area of the triangle:

#include<stdio.h>

int main(){
    float base;
    printf("Enter the value of base\n");
    scanf("%f",&base);
    float height;
    printf("Enter the value of height\n");
    scanf("%f", &height);
    printf("The value of area of a triangle is %f\n",base*height*1/2);

    return 0;
}