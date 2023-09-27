#include <stdio.h>

int main()
{
   int a = 4;
   // int b = 8.5; // Not recommended because 8.5 is not an integer

   float b = 8.5;
   char c = 'u';
   float e = 3.351;
   int d = 8;
   int f = a + d;
   printf("The value of a is %d \n",a);
   printf("The value of b is %f \n", b);
   printf("The value of c is %c \n", c);
   printf("The value of a + d is %d \n", a+d);

   printf("The value of a + e is %f \n", a + e);
   printf("The value of a + d is %d \n", f);


   return 0;

}
