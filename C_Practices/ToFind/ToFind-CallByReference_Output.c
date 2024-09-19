#include<stdio.h>

int sent(int *p1,int *p2)
{
  int *temp;
  temp = p1;
  p2 = p1;           // see carefully not interchanged
  p1 = temp;
}

int main()
{
  int a=5,b=6,c=7;
  sent(&a,&b);

  printf("%d",a);  
}

// Output: 5