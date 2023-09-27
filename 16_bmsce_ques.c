// Write the program to print the following patterns
// Pattern:
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);
    printf("Pattern:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}