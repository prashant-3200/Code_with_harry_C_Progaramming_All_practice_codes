// Illustrate conditional branching statements to find the smallest of three numbers.

#include<stdio.h>

int main(){
    int a,b,c;
    int s;
    printf("Enter the three number: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b && a<c){
         s = a;
    }
    else if(b<a && b<c){
         s = b;
    }
    else if(c<a && c<b){
         s = c;
    }
    printf("%d is the smallest number \n",s);

    return 0;
} 