#include <stdio.h>

int main()
{
   int a = 21;
   int b = 10;
   int c ;

   if( a == b )
   {
      printf("Line 1 - a is b\n" );
   }
   else
   {
      printf("Line 1 - a not b\n" );
   }
   if ( a < b )
   {
      printf("Line 2 - a < b\n" );
   }
   else
   {
      printf("Line 2 - a not < b\n" );
   }
   if ( a > b )
   {
      printf("Line 3 - a > b\n" );
   }
   else
   {
      printf("Line 3 - a not > b\n" );
   }
   /* change a,b's data */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      printf("Line 4 - a < or > b\n" );
   }
   if ( b >= a )
   {
      printf("Line 5 - b > or is a\n" );
   }

   printf("\n");
   printf("\n");
   printf("a is %d\n", a);
   printf("b is %d\n", b);
}
