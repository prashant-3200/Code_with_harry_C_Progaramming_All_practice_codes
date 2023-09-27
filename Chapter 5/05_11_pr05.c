#include<stdio.h>

int main(){
    int a =3;
    printf("%d %d %d", a, ++a, a++);  // follows  right to left convention :)
    return 0;
}