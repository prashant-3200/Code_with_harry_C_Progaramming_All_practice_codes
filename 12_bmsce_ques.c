// Develop a C program to print even numbers from M to N

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the number M: \n");
    scanf("%d", &m);
    printf("Enter the number N: \n");
    scanf("%d", &n);

    if ((m % 2 != 0 && n % 2 != 0) || (m % 2 != 0 && n % 2 == 0))
    {
        int a = m + 1;
        printf("The even numbers from M to N is \n");
        for (a = m + 1; a <= n; a += 2)
        {

            printf("%d\n", a);
        }
    }
    else if ((m % 2 == 0 && n % 2 == 0) || (m % 2 == 0 && n % 2 != 0))
    {
        int a = m;
        printf("The even numbers from M to N is \n");
        for (a = m; a <= n; a += 2)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}