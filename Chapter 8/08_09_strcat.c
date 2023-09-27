#include<stdio.h>
#include <string.h>

int main(){
    char st1[100];
    scanf("%s",st1);
    char st2[100];
    scanf("%s",st2);
    int len=0,i=0;
    while(st1[len] != "\0"){
        len++;
    }
    while(st2[i] != "\0"){
        st1[len] = st2[i];
        len++;
        i++;
    }
    
    printf("Now the concatenated string  is %s", st1);
    printf("Total length of concatenated string is %d",len+1);
    return 0;
}