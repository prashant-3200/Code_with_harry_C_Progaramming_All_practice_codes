#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("The sum of natural number of %d is : %d \n",n,sum(n));
    return 0;
}
int sum(int n){
  int result = 0;

  for(int i =1; i<=n;i++){

      result = result + i;

  }
  return result;
}