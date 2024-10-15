#include <stdio.h>

void troca(int m, int n)
{
   int x = m;
   
   m = n;
   n = x;
}

int main()
{
   int x = 5, y = 3;

   troca(x,y);
   
   printf("%d %d", x, y);
   
   return 0;

}