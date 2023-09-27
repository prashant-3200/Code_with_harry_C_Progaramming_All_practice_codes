// Write a program to give the conjugate of a matrix..........

#include<stdio.h>

int main(){
    int r,c;
   int matrix[100][100];
   int xmatrix[100][100];
    printf("Enter the value of number of rows in the matrix: \n");
    scanf("%d",&r);
    printf("Enter the value of number of coloumn in the matrix: \n");
    scanf("%d",&c);
    
    for(int i=0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("Enter the value of (%d,%d) of matrix: \n",i+1,j+1);
                scanf("%d",&matrix[i][j]);
            }
        }
    
    printf("The given matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");

    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            xmatrix[i][j] = matrix[j][i];
        }
    }
     printf("The conjugate matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",xmatrix[i][j]);
        }
        printf("\n");
    }





    return 0;
}