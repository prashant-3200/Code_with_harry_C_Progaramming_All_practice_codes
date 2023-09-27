#include<stdio.h>

int main(){
    // int items[] = {1,2,3,4,5,6,7,8,9,10};
    // int *ptr = items;
    // printf("%d\n",*ptr);
    // ptr++;
    // printf("%d",*ptr);
    int items[10];
    int *ptr;
    ptr = items;  // int *ptr = &items[0];
    printf("first address is %u\n",ptr);
    ptr = ptr+2;
    if(ptr==&items[2]){
        printf("correct\n");
    }
    else{
        printf("Wrong\n");
    }
    printf("first address is %u",ptr);


    return 0;
}