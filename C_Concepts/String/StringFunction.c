// To Find Length of the string using string.h library
// To Find string Copy
// To Find string Reverse
// To Find string Concatenate

#include<stdio.h>
#include<string.h>

int main()
{
  char str1[20],str2[20]="String2";
  printf("Enter any string: ");
  gets(str1);
  printf("Entered string: %s",str1);
  printf("\nThe Length of the string: %d",strlen(str1));  // strlen
  strcpy(str2,str1);   // strcpy - Copying str1 to str2
  printf("\nCopied String: %s",str2);
  printf("\nReversed String: %s",strrev(str1)); // strrev
  strcat(str2,str1);   // strcat - add str1 to str2
  printf("\nConcatenate String: %s",str2);
}