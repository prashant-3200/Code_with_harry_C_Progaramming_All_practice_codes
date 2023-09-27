// Develop a C program to perform arithmetic operations (addition, subtraction, multiplication, division and remainder)
// on two integers using pointers.

#include<stdio.h>

void operation(int *a, int *b){
printf("Sum of 2 numbers= %d\n",(*a+*b));
printf("Difference of 2 numbers = %d\n",(*a -*b));
printf("Product of 2 numbers= %d\n",(*a * *b));
printf("Division= %.2f\n",(float)(*a)/(*b));
printf("Remainder= %d\n",*a%*b);


}
int main(){
    int a;
    int b;
    printf("Enter the value of a and b respectively: \n");
    scanf("%d%d",&a,&b);
    
    operation(&a,&b);  
    
    return 0;
}