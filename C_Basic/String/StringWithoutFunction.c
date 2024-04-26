// To Find Length of the String without String.h library
// To Find string Copy without String.h library
// To Find string Reverse without String.h library
// To Find string Concatenate without String.h library

#include<stdio.h>

int main()
{
  char str1[20],length=0,i,j,str2[20],revLen=0;
  printf("Enter any string: ");
  gets(str1);
  printf("Entered String: %s",str1);

  // String Length
  for (i=0;str1[i]!='\0';i++)
    length++;
  printf("\nThe Length of the String: %d",length);

  // String Copy
  for(i=0;str1[i]!='\0';i++)
    str2[i] = str1[i];
  str2[i] = '\0';
  printf("\nCopied String: %s",str2);


  // String Reverse
  printf("\nReversed String: ");
  for(i=0;str1[i]!='\0';i++)   //first find the length and reverse it to print
    revLen++;
  for(i=revLen-1;i>=0;i--)
    printf("%c",str1[i]);

  // string Concatenate
  char str3[20]="add ";
  for(i=0;str3[i]!='\0';i++);  //only to get final index of str3
  for(j=0;str1[j]!='\0';j++)
  {
    str3[i] = str1[j];
    i++;
  }
  str3[i] = '\0';
  printf("\nConcatenated String: %s",str3);
}