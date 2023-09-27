#include<stdio.h>
 int fibonacci(int a);
int main(){
    int n;
    printf("Enter the value of any number:\n");
    scanf("%d",&n);
    printf("The fibonacci value of this number is :\n %d ",fibonacci(n));
    
    return 0;
}
int fibonacci(int a){
    

    if( a == 0 || a== 1){
        return 0;
    }
    else if( a == 2){
        return 1;

    }
    else{
        return fibonacci(a-1) + fibonacci(a-2);
    }

}
