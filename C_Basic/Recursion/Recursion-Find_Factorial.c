#include<stdio.h>
int fact(int);

int main()
{
  int number,result;
  printf("Enter the number: ");
  scanf("%d",&number);
  result = fact(number);
  printf("Factorial of %d is %d",number,result);
}

int fact(int number)
{
  int i = number;
  if (i==0)
    return 1;
  else
    return(i * fact(i-1));   
}
