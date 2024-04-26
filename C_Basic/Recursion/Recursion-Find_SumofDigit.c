#include<stdio.h>
int sum_num(int);

int main()
{
  int number,result;
  printf("Enter the number: ");
  scanf("%d",&number);
  result = sum_num(number);
  printf("Sum of Digit for %d is %d",number,result);
}

int sum_num(int number)
{
  int i = number;
  if (i==1)
    return 1;
  else
    return(i + sum_num(i-1));   
}
