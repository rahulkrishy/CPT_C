// To Find String Comparision using Pointer String Access

#include <stdio.h>

int myStrcmp(char *s1, char *s2);

int main()
{
  char str1[40], str2[20],result;
  printf("Enter the First String: ");
  fgets(str1, sizeof(str1), stdin);
  printf("Enter the Second String: ");
  fgets(str2, sizeof(str2), stdin);
  myStrcmp(str1,str2);
  return 0;
}

int myStrcmp(char *s1, char *s2)
{
  int result;
  while(*s1==*s2 && (*s1!='\0' || *s2!='\0'))
  {
    s1++;
    s2++;
  }
  result = *s1-*s2;

  if (result==0)
    printf("Both are Same");
  else if (result >0)
    printf("str1 is has greater ascii value than str2");
  else
    printf("str2 is has greater ascii value than str1");
}
