// Double Pointer or Pointer of Pointer

#include<stdio.h>

int main()
{
  int a=10,*p,**pp;
  p = &a;
  pp = &p;
  printf("\na    = %d",a);
  printf("\n*p   = %d",*p);
  printf("\n**pp = %d",**pp);

  // if we alter value in any location , will affect in all variables.
  // **pp = 55;   // if 55 is assigned to double pointer variable, all the values of variable is 55;
  
  **pp = *p +10;           // **pp = 10+10 = 20 = *p = a
  printf("\na    = %d",a);
  printf("\n*p   = %d",*p);
  printf("\n**pp = %d",**pp);
}