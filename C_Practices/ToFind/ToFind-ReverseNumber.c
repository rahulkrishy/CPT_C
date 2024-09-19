// To Find the Reverse NUmber:

#include<stdio.h>
int reverseNum(int);

int main()
{
  int number,result;
  printf("Enter the number: ");
  scanf("%d",&number);
  result = reverseNum(number);
  printf("Reversed Number: %d",result);
}

int reverseNum(int number)
{
  int lastDigit,reverse_Num=0;
  while(number!=0)
  {
    lastDigit = number%10;
    reverse_Num = reverse_Num *10 + lastDigit;
    number = number/10;
  }
  return reverse_Num;
}