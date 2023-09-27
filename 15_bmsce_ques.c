// Factorial of any number


#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    printf("Enter the any number: \n");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        printf("Factorial of %d is %d \n", n, a);
    }
    else
    {

        for (int i = n; i >= 2; i--)
        {
            a = a * i;
        }
        printf("Factorial of %d is %d \n", n, a);
    }

    return 0;
}