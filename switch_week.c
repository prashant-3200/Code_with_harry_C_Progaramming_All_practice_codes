// # include<stdio.h>

// int main(){
//     printf("Hello I am learning C with Harry\n");
// double pie = 22.0/7;
// printf("%0.54f",pie);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter your number between 1-7: ");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
            printf("It is  Monday");
            break;
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        case 4:
            printf("It is Thursday");
            break;
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("Enter number between 1-7 only");
    }
    return 0;
}