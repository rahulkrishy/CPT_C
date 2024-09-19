#include<stdio.h>

int main()
{
  int a[]={10,20,30,40,50};
  int *p[] = {a,a+3,a+4,a+1,a+2};
  int **ptr = p;
  ptr++;
  printf("\n\n\n%d",ptr);
  printf("\n%d",p);
  printf("\n%d%d",ptr-p,**ptr);
}

// output: 1 40

// In C, pointer arithmetic works based on the size of the data type that the pointer points to. 
// When you subtract two pointers of the same type, the result represents the number of elements between those pointers, not the difference in memory addresses.