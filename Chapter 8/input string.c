#include<stdio.h>
    int length(char * st){
    char *ptr = st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len - 1;
}

        int main()
        //do not use void as return type of main
        {
             char st[100];
        fgets(st, 100, stdin);

    int l = length(st);
    printf("The length of this string is %d", l);
            return 0;
        }