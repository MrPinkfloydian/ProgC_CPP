#include<stdio.h>
//stefanie alterou.
void f() 
{ 
   static int i;
   
   ++i; 
   printf("%d", i); 

}


int main()
{ 
   f(); 
   f(); 
   f();
   
   return 0;
}