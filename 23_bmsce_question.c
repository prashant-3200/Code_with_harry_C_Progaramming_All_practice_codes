/*In a small company there are 3 salesman. Each salesman is supposed to sell 2 products. Write a
  program using 2-dimensional array to print
 Total sales by each salesman
 Total sales of each item*/
#include<stdio.h>

int main(){
         int r;
     int c;
     int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
     printf("Enter the number of salesman: \n");
     scanf("%d",&r);
     printf("Enter the number of different types of products: \n");
     scanf("%d",&c);
     int data[r][c];
    
     for(int i = 0;i<r;i++){
         for(int j = 0;j<c;j++){
             printf("Enter the the number of sales of product%d by salesman%d : \n",j+1,i+1);
             scanf("%d",&data[i][j]);
             }
             
         }
    
    for(int i = 0;i<r;i++){
        total1 += data[i][0];
        }

    for(int i = 0; i<r;i++){
        total2 += data[i][1];
    }
    for(int i = 0;i<c;i++){
        total3 += data[0][i];
    }
    for(int i = 0;i<c;i++){
        total4 += data[1][i];
    }
    for(int i = 0;i<c;i++){
        total5 += data[2][i];
    }
    
        printf("Total sales of product1 is %d \n",total1);
   
        printf("Total sales of product2 is %d \n",total2);
   
        printf("Total sales by salesman%d is %d \n",total3);
    
        printf("Total sales by salesman%d is %d \n",total4);
    
        printf("Total sales by salesman%d is %d \n",total5);
    

    return 0;
}