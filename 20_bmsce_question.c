#include<stdio.h>

int main(){
    int result[5][3];
    for(int i =0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("Enter the marks of student[%d] in subject[%d]: \n",i+1,j+1);
            scanf("%d",&result[i][j]);
        }
    }
    for(int j = 0;j<3;j++){
        for(int i = 1;i<5;i++){
            if(result[0][j] < result[i][j]){
                result[0][j] = result[i][j];
            }
        }
    }
    for(int j = 0;j<3;j++){
        printf("Highest marks obtained in the subject[%d] is : %d \n",j+1,result[0][j]);
    }


    return 0;
}