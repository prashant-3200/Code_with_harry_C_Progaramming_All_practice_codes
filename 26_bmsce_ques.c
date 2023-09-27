#include<stdio.h>

int main(){
    int arr[5];
    for(int i =0;i<5;i++){
        printf("Enter your marks of subject%d: \n",i+1);
        scanf("%d",&arr[i]);

    }
    for(int i =0;i<5;i++){
        if(arr[i] == 37){
            printf("You got 37 marks in subject%d \n",i+1);
        }

        
    }
    return 0;
}