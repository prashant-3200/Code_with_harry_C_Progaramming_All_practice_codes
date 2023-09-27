#include<stdio.h>
   float faren(float celcius);
int main(){
    float c;
    printf("Enter the value in celcius:\n");
    scanf("%f",&c);
    printf("The value of %f in farenheit is : %f",c, faren(c));
  
    return 0;
}

float faren(float celcius){
     float result;

    result = (celcius*((float)9/5)+32);
     return result;

}