// Develop the program to find distance between two points.

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    printf("Enter x1:\n");
    scanf("%f", &x1);
    printf("Enter x2:\n");
    scanf("%f", &x2);
    printf("Enter y1:\n");
    scanf("%f", &y1);
    printf("Enter y2:\n");
    scanf("%f", &y2);
    float distance = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%f", sqrt(distance));

    return 0;
}