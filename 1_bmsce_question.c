// Write the program to find the area of circle.

#include<stdio.h>

int main(){
    float radius;
    printf("Enter the value of radius\n");
    scanf("%f", &radius);

    float pie = 3.14;
    
    printf("Area of the circle of radius %f is %f", radius, pie*radius*radius );


    

    return 0;
}