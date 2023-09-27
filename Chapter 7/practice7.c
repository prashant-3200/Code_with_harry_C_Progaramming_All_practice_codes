#include <stdio.h>

int osi(int *fio, int n)
{
    for (int i = 0; i < 10; i++)
    {
        fio[i] = n * (i + 1);
        printf("%d X %d = %d\n", n, i + 1, fio[i]);
    }
}

int main()
{
    int fio[3][10];
    int n;

    while (n != 0)
    {
        printf("Enter the number: \n ");

        scanf("%d", &n);
        osi(fio[0], n);
    }
    return 0;
}