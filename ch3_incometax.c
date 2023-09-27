// why this program showing error?????

#include <stdio.h>
#include <math.h>
int main()
{

    float tax;
    float income;
    printf("Enter your income:\n");
    scanf("%f", &income);
    if (income < 500000 && income > 250000)
    {
        printf("Your income tax is:%f\n", .05 * income);
    }
    else if (income < 250000)
    {
        printf("Your income tax is: %f\n", 0);
    }
    else if (income > 500000 && income < 1000000)
    {
        printf("Your income tax is: %f", .20* income); // (20/100)*income is not getting compiled
    }
    else
    {
        printf("Your income tax is : %f", .30 * income);
    }
    return 0;
}