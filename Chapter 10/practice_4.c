// Identify the problem in this code
#include<stdio.h>

int main(){
    // struct emp{
    //     int salary;
    //     char name[15];

    // }e1,e2;
    int s1,s2;
    char n1[23],n2[23];

    printf("Enter the name and salary of both employees: \n");
    scanf("%s%d%s%d",n1,&s1,n2,&s2);
    FILE *ptr;
    ptr = fopen("pr04.txt","w");
    fputc(n1,ptr);
    fprintf(ptr,",");
    fputc(s1,ptr);
    fprintf(ptr,"\n");
    fputc(n2,ptr);
    fprintf(ptr,",");
    fputc(s2,ptr);
    fprintf(ptr,"\n");
    fclose(ptr);
    return 0;
}