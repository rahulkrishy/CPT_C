// To Find the Sum of Digits:

#include<stdio.h>
int sumNum(int);

int main()
{
  int number,result;
  printf("Enter the number: ");
  scanf("%d",&number);
  result = sumNum(number);
  printf("Sum of Digits: %d",result);
}

int sumNum(int number)
{
  int lastDigit,sum_Num=0;
  while(number!=0)
  {
    lastDigit = number%10;
    sum_Num = sum_Num + lastDigit ;
    number = number/10;
  }
  return sum_Num;
}