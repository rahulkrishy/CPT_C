// To Find String Length using Pointer String Access

#include<stdio.h>

int strLen(char *ptr);

int main()
{
  char str[20],result;
  printf("Enter the String: ");
  fgets(str,sizeof(str),stdin);
  result = strLen(str);
  printf("\nLength of the String: %d",result);
  return 0;
}

int strLen(char *ptr)
{
  int len=0;
  while(*ptr!='\0')
  {
    len++;
    ptr++;
  }
  return len;
}

// Alternate approach:
// int strLen(char *ptr)
// {
//   char *temp;
//   temp = ptr;
//   while(*temp!='\0')
//     temp++;
//   return (temp-ptr);
// }