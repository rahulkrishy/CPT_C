#include<stdio.h>

int main()
{
  char s[7] = "1234" , *p;
  p = s+2;
  *p = '0';
  printf("%s",s);
}

// output: 1204