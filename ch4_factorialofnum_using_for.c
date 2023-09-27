// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number please: \n");
//     scanf("%d",&n);
// int fact = 1;

// for(int i = 1; i<=n; i++ ){

// fact = fact * i;

// }

// printf("The factorial of number %d is %d",n,fact);
//     return 0;
// }

// Same problem in while loop;


#include<stdio.h>

int main(){
    int n;
    int fact = 1;
    int i = 1;
    printf("Enter your number please: \n");
    scanf("%d",&n);
    

    while(i<=n){

        fact = fact * i;
        i++;

    }
    printf("Factorial of %d is %d",n,fact);


    return 0;
}