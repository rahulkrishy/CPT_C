// To Find Largest Number among 3 using Ternary operator:

#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter Three Numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  int res = a>b&&a>c ? a : b>a&&b>c ?b : c ;
  printf("Largest Num: %d", res);
}