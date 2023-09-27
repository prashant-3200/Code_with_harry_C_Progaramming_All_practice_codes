#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Identify the problem in the code::::::

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000];
    scanf("%s",s);
    int output[10];
    int num[10];
    int n=0;
    int k = 0;
    
    int i = 0;
    while(s[i] != '\0'){
        n = n+1;
        i++;
    }
    char a ="0123456789";
    for(int j =0;j<n;j++){
    int sum = 0;
        if(s[j] == a[k]){
        sum++;
        }

    k++;

output[k] = sum;
 
    }
   
    return 0;
}