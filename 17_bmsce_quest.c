// write a program to sum two different matrices:

#include<stdio.h>

int main(){
    int mat1[100][100];
    int mat2[100][100];
    int sum[100][100];
    int row;
    int coloumn;
    printf("Enter the value of row of matrix: \n");
    scanf("%d",&row);
    printf("Enter the value of coloumn of matrix: \n");
    scanf("%d",&coloumn);

    for(int i = 0;i<row;i++){
        for(int j = 0;j<coloumn;j++){
            printf("Enter the value of %d,%d of mat1: \n",i+1,j+1);
            scanf("%d",&mat1[i][j]);

        }
    }

    for(int i = 0;i<row;i++){
        for(int j = 0;j<coloumn;j++){
            printf("Enter the value of %d,%d of mat2: \n",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i = 0;i<row;i++){
        for(int j = 0;j<coloumn;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];   
        }
    }
    printf("The sum of matrix 1 and matrix 2 is : \n");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<coloumn;j++){
            printf("%d  ",sum[i][j]);
            if(j == coloumn - 1){
                printf("\n\n");
            }
        }
    }


    
    return 0;
}