#include<stdio.h>

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("Table of %d is \n",a);


    for(int i= 10 ;i>0; i--){
        printf("%d * %d = %d\n",a , i , a*i);
        
    }


    return 0;
}