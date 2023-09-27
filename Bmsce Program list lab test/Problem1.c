// 1. Implement a C program to find distance between two points.

#include<stdio.h>
#include<math.h>

int main(){
    int x1,y1,x2,y2;
    printf("Enter the x and y cordinate of point:\n");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("Enter the x and y cordinate of point 2:\n");
    scanf("%d",&x2);
    scanf("%d",&y2);
    float distance = (float)sqrt(pow(x1 - x2,2) + pow(y1-y2,2));
    printf("The distance between these two point is : %f",distance);
    return 0;
}