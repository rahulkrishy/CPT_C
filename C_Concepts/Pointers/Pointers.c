// Basic Pointer:

#include<stdio.h>

int main()
{
  int a, *p;
  printf("Enter the num: ");
  scanf("%d",&a);
  printf("\nA Value:   %d",a);
  printf("\nA address: %u",&a);
  p = &a;
  printf("\nP Value:   %d",*p);  // '*' displays value stored in that address
  printf("\nP address: %d",p);   // Display address stored in pointer

}