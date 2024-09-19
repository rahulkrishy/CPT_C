// To Find Factorial:

#include<stdio.h>
int factorial(int);

int main()
{
  int number,result;
  printf("\n Enter the Number: ");
  scanf("%d",&number);
  result = factorial(number);
  printf("\nFactorial of Number %d is %d",number,result);
}

int factorial(int number)
{
  int i,fact=1;
  for(i=1;i<=number;i++)
  {
    fact = fact*i;
  }
  return fact;
}
