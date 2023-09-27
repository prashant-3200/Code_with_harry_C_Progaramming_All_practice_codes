#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter the side1 , side 2 , side 3 respectively:\n");
    scanf("%d\n%d\n%d",&n1,&n2,&n3);
    float area, s;
    s = (float)(n1 + n2 + n3)/2;

    area = sqrt((s*(s-n1)*(s-n2)*(s-n3)));
    printf("Area of triangle is : %f",area);

    return 0;
}