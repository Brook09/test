#include <stdio.h>

int main()

{
   int a=0, b=0, c=0, t=0;
   char str[4];
   int i, izlaz[3];
   
   scanf("%d%d%d", &a, &b, &c );

   if ( a > b ) { t = a; a = b; b = t; }
   if ( a > c ) { t = a; a = c; c = t; }
   if ( b > c ) { t = b; b = c; c = t; }

   scanf( "%s", str );

   for ( i=0; i<3; ++i ) {
      if      ( str[i] == 'A' ) izlaz[i] = a;
      else if ( str[i] == 'B' ) izlaz[i] = b;
      else if ( str[i] == 'C' ) izlaz[i] = c;
   }

   printf("%d %d %d", izlaz[0], izlaz[1], izlaz[2] );

   return 0;
}