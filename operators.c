/*
Operators.

1. Arithmetic operator
   +  -  *   /   %

2. inc/dec

   a++;  ++a;
   a--;  --a;

3. assignment operator
  +=  -=  *=  /=  %=

4. Relational operators.
  <  >  <=  >=  ==  !=

5. Logical operators
     &&   ||  !

6. Teranry operator
   () ? true :  false;

7. bitwise operator
    &   |   ^  <<  >>
*/

#include <stdio.h>

int main()
{

   printf("%d\n", 10 + 20);
   printf("%d\n", 30 - 10);
   printf("%d\n", 10 * 3);
   printf("%d\n", 20 / 10);
   printf("%d\n", 30 % 10);

   int a = 10;
   int b = 20;

   printf("%d\n", a++); // 11
   printf("%d\n", a);
   printf("%d\n", ++a);
   printf("%d\n", b--);
   printf("%d\n", --b);

   printf("%d\n", a += 10); // a = a+10;
   printf("%d\n", a *= b);  // a = a*b;

   int c = 20;
   int d = 22;
   printf("%d\n", c <= d);
   printf("%d\n", c > d);
   printf("%d\n", c != d);

   printf("%d\n", (c < d) && (c > d));
   printf("%d\n", !(c > d));

   c > d ? printf("Yes condition is true\n") : printf("No condition is not true\n");

   printf("%d\n", 13 >> 2);

   int check;
   char check2;
   double check3;

   printf("%d bytes for check\n", sizeof(check3));

   /*
   &  *  ::  .  sizeof()  ternary.
   */

   printf("-------------------------------\n");

   int x = 10 + 20 * 30 - 40;
   //  =  10 + 600 -40
   //  =   610 -40
   //  =    570

   printf("%d\n", x);
}