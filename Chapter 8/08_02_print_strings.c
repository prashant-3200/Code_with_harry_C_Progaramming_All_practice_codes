#include<stdio.h>

int main(){
    // char str[] = "Harry";  
    
    char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    char *ptr = str;
    // int i =0;
    // while(str[i] != '\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}