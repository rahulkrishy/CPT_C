// To Check Palindrome:

#include<stdio.h>

int check_palindrome(int num);

int main()
{
  int num, result;
  printf("\nEnter the number: ");
  scanf("%d",&num);
  result = check_palindrome(num);
  if (result == 1)
  printf("Palindrome");
  else if (result == 0)
  printf("Not a Palindrome");
  else
  printf("error");
}

int check_palindrome(int num)
{
  int old_num = num ;
  int rev_num = 0 ;
  while(num!=0)
  {
    int lastDigit = num % 10;
    rev_num = rev_num * 10 + lastDigit ;
    num = num / 10;
  }

  if (old_num == rev_num)
    return 1;
  else
    return 0;
}