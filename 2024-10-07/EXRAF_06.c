#include<stdio.h>

int main()
{	
   union xpto {
      int x;
      char ch;
   } abc;

   abc.ch = 'A';
   
   printf("%d", abc.x);

   return 0;
}