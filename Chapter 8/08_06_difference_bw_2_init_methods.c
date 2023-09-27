#include<stdio.h>

int main(){ 
    char *ptr = "Harry Bhai";
    // char ptr[] = "Harry Bhai";
    ptr = "Shubham bhai";   // *ptr allows us to change the value of string ptr further in program but whereas ptr[] doesn't allow us to 
                            // change the value of ptr[] further in program
    printf("%s", ptr);      
    return 0;
}