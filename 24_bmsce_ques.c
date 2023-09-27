#include<stdio.h>

int main(){
         int r;
     int c;
     int total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
     
     int data[3][2];
    
     for(int i = 0;i<3;i++){
         for(int j = 0;j<2;j++){
             printf("Enter the the number of sales of product%d by salesman%d : \n",j+1,i+1);
             scanf("%d",&data[i][j]);
             }
             
         }
    
    for(int i = 0;i<3;i++){
        total1 += data[i][0];
        }

    for(int i = 0; i<3;i++){
        total2 += data[i][1];
    }
    for(int i = 0;i<2;i++){
        total3 += data[0][i];
    }
    for(int i = 0;i<2;i++){
        total4 += data[1][i];
    }
    for(int i = 0;i<2;i++){
        total5 += data[2][i];
    }
    
        printf("Total sales of product1 is %d \n",total1);
   
        printf("Total sales of product2 is %d \n",total2);
   
        printf("Total sales by salesman1 is %d \n",total3);
    
        printf("Total sales by salesman2 is %d \n",total4);
    
        printf("Total sales by salesman3 is %d \n",total5);
    

    return 0;
}