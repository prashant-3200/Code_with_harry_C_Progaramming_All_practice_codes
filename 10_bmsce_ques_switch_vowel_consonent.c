#include<stdio.h>

int main(){
    
    char a;
    printf("Enter any character:\n");
    scanf("%c",&a);
    switch (a)
    {
    case 'A':
        printf("It is vowel\n");
        
        break;
    case 'E':
        printf("It is vowel\n");
        break;
    case 'I':
        printf("It is vowel\n");
        break;
    case 'O':
        printf("It is vowel\n");
        break;
    case 'U':
        printf("It is vowel\n");
        break;

    case 'a':
        printf("It is vowel\n");
        
        break;
    case 'e':
        printf("It is vowel\n");
        break;
    case 'i':
        printf("It is vowel\n");
        break;
    case 'o':
        printf("It is vowel\n");
        break;
    case 'u':
        printf("It is vowel\n");
        break;

    default:
        printf("It is consonant\n");
        break;
    }

    return 0;
}