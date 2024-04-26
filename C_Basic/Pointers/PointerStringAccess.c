#include<stdio.h>

int main()
{
  char str[20],*ptr;
  int len=0;
  printf("Enter the string:");
  fgets(str, sizeof(str), stdin);   //fgets(StringName, StringSize, (Specify inputStream(file/keyboard)-optional))
  ptr = str;                        // Pointer to String Assigning
  while(*ptr!='\0')
  {
    printf("%c",*ptr);
    len++;
    ptr++;
  }
  printf("\nLength of the String: %d",len);
}