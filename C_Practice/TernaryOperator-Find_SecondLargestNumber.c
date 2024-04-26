// To Find 2nd Largest Number among 3 using Ternary operator:
 
#include<stdio.h>

int main()
{
  int x=10, y=5, z=1, max;
  max = x>y&&x>z ? y>z?y:z : y>x&&y>z ? x>z?x:z : x>y?x:y ;
  printf("2nd Largest num: %d", max);
}
