#include<stdio.h>

int main(){
    int subject1, subject2, subject3;
    printf("Enter the subject1 marks \n");
    scanf("%d",&subject1);
    printf("Enter the subject2 marks \n");
    scanf("%d",&subject2);
    printf("Enter the subject3 marks \n ");
    scanf("%d",&subject3);

float total = (subject1 + subject2 + subject3)/3;

if(total<40 || subject1 < 33 || subject2 < 33 || subject2 < 33){
    printf("Your total percentage is %f You are failed\n",total);
}
// else if (subject1 < 33 && subject2 < 33 && subject2 < 33){
//     printf("You are failed\n");

else{
    printf("Your total percentage is %f. You are passed", total);
}

    return 0;
}