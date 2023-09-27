// Implement a C program to concatenate two strings and find the length of resultant string without using
// built in functions.

#include<stdio.h>



int main(){
    char st1[100];
    char st2[100];
    printf("Enter st1: \n",st1);
    scanf("%s",st1);
    printf("Enter st2: \n",st2);
    scanf("%s",st2);

    int i = 0;
    while(st1[i] != '\0'){
        i++;
    }
    
    int j = 0;
    while(st2[j] != '\0'){
        st1[i] = st2[j];
        i++;
        j++;
    }
    st1[i] = '\0';
    printf("Concatenated string of st1 and st2 is %s\n",st1);
    printf("length of concatenated string is %d",i);
    
    return 0;
}