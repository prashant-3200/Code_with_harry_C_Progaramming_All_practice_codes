// why this code doesn't work 
#include<stdio.h>

int main(){
    int rating;
    printf("Enter your marks obtained:\n");
    scanf("%d",&rating);

    switch(rating){
        case 90 - 100:

        printf("A\n");

        case 80 - 89:
        printf("B\n");
        break;
        case 70 - 79:
        printf("C\n");
        break;
        case 60 - 69:
        printf("D\n");
        break;
        case < 60 :
        printf("F\n");
        break;

        default:
          printf("invalid entry\n");
          break;

    }


    return 0;
}