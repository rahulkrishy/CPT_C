// Increment/Decrement Pointer Address

#include<stdio.h>

int main()
{
  int a,*p;
  p = &a;
  printf("Address of a: %u",p);
  p = p+4;                         // increment address by 4*sizeof(int)
  printf("\nIncremented Address of a: %u",p);
  p = p-2;                        // Decrement address by 2*sizeof(int)
  printf("\nDecremented Address of a: %u",p);
}