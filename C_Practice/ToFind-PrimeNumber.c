// To Check Prime Number:

#include<stdio.h>
int isPrime(int);

int main()
{
  int number,result;
  printf("\n Enter the number to check Prime: ");
  scanf("%d",&number);
  result = isPrime(number);
  if (result == 1)
    printf("%d is a Prime Number",number);
  else
    printf("%d is not Prime Number",number);
}

int isPrime(int number)
{
  int i,flag=0;
  for(i=2;i<=number/2;i++)
  {
    if (number%i == 0)
      flag +=1;
      break;
  }
  if (flag == 1)
    return 0;
  else
    return 1;
}