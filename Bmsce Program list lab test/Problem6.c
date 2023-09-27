//  Demonstrate reading a two-dimensional array of marks which stores marks of 4 students in 3 subjects
//  and display the highest marks in each subject.

#include<stdio.h>

int main(){
    int arr[4][3];
    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            printf("Enter the marks of student[%d] in subject[%d] \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j = 0;j<3;j++){
        
        for(int i = 0;i<4;i++){
            if(arr[0][j] < arr[i][j]){
                arr[0][j] = arr[i][j];
            }
        }
    }
    for(int j = 0; j <3;j++){
        printf("Highest marks in subject[%d] is %d \n",j+1,arr[0][j]);
    }

    return 0;
}