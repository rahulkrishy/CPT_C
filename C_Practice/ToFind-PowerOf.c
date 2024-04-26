// To calculate the result of raising a given base to a specified exponent using the power function.

#include <stdio.h>
#include <math.h>

int To_pow(int base, int exp);

int main()
{
  int x,n;
  printf("\n Enter the base and exp Number : ");
  scanf("%d%d",&x,&n);
  printf("Result : %d",To_pow(x,n));
}

int To_pow(int base, int exp)
{
  return pow(base,exp) ;
}

