#include<stdio.h>

int x = 5;

int* f() 
{
   return &x;
}

int main()
{	
   *f() = 10;
   
   printf("%d", x);

   return 0;
}