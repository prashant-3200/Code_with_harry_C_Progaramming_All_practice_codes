#include<stdio.h>

int main(){
    int num[10] , n;

    printf("Enter the number to print its multiplication table: \n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        num[i] = n*(i+1);
    

    }
    for(int i = 0 ; i <10 ; i++){
        printf("%d X %d = %d\n",n,(i+1),num[i]);
    }
    
    return 0;
}