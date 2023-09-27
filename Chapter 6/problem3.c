// To print to multiply any number by 10
#include<stdio.h>
 
void ten_times(int *a){
    *a *= 10;

  
}


int main(){
    int a;
    printf("Enter any number: \n");
    scanf("%d",&a);
    
    ten_times(&a);
    printf("The value of edited a is %d \n",a);

    return 0;
}