// Recursion-Find Output  

#include<stdio.h>

int func1(int n);
int func2(int n);

int main()
{
  func1(5);
}

int func1(int n)
{
  if(n==0)
    return 0;
  printf("%d",n);
  func2(n-2);           
  printf("%d",n);
}

int func2(int n)
{
  if (n==0) 
    return 0;
  printf("%d",n);
  func1(++n);           //pre-increment
  printf("%d",n);
}

// Output: 53423122233445