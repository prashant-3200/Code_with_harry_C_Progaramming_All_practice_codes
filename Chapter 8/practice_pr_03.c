// solve the error ===========================================|


#include<stdio.h>
int strlen(char *st){
    char *ptr = st;
int sum = 0;
while(*ptr!= "\0"){
    sum++;
    ptr++;
}
return sum;
}
int main(){
    char st[] = "Prashant";
    // printf("Enter the value of strings:\n");
    // scanf("%s",st);
    // strlen(ptr);
    printf("%d\n",strlen(st));
    return 0;
}