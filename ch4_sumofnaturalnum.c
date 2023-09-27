// #include<stdio.h>

// int main(){
//     int i = 1;
//     int n;
//     printf("Enter the number n:\n");
//     scanf("%d",&n);

//     int sum = 0;
//     while(i<=n){

//          sum = i + sum;
//          i++;
//     }
//    printf("The sum of first n natural number is %d\n ",sum);


//     return 0;
// }

// Now the same problem in for loop:

// #include<stdio.h>

// int main(){
//     int n;
//     int sum = 0;
//     printf("Enter the number:\n");
//     scanf("%d",&n);

//     for(int i = 0; i <= n; i++){
//         sum += i ;

//     }
//     printf("The sum of first n natural number is : %d\n",sum);

//     return 0;
// }

// Now the same problem in do while loop;

#include<stdio.h>

int main(){
        int n;
        int i = 1;
    int sum = 0;
    printf("Enter the number:\n");
    scanf("%d",&n);


    do{
        sum = sum + i ;
        i++;
    }while(i<=n);


    return 0;
}