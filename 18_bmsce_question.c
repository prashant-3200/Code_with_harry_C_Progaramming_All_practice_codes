// Write a program to find the largest element in 2D array:
#include<stdio.h>

int main(){
    int result[3][5];

    for(int i = 0; i<3;i++){
        for(int j =0;j<5;j++){
            printf("Enter the marks of student[%d] in subject[%d]: \n",j+1,i+1);
            scanf("%d",&result[i][j]);
        }
    }
    for(int i = 0; i <3;i++){
        for(int j=1;j<5;j++){
            if(result[i][0]<result[i][j]){
                result[i][0] = result[i][j];
            }
        }
    }
    for(int i = 0;i<3;i++){
        
            printf("The highest marks in subject[%d] is : %d\n",i+1,result[i][0]);

    }



    return 0;
}