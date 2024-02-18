#include <stdio.h>

#include <conio.h>

void main()
{
   int a, b, c;
   a = 5;
   b = 4;

   c = a;
   a = b;
   b = c;
   printf("a=%d b=%d", a, b);

   getch();
}