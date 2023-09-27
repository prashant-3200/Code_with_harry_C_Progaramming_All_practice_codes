#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int p, q, r;
    printf("Enter the value of a\n");
    scanf("%d", &p);
    printf("Enter the value of b\n");
    scanf("%d", &q);
    printf("Enter the value of c\n");
    scanf("%d", &r);
    printf("The value of average is %f", average(p, q, r));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (float)(a + b + c)/3;
    return result;
}