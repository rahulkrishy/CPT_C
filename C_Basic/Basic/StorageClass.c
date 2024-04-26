#include<stdio.h>

// Auto Storage Class
int auto_sc()
{
  int i=10;
  printf("\ni=%d",i);
  i++;
}

// static Storage Class
int static_sc()
{
  static int i=10;
  printf("\ni=%d",i);
  i++;
}

int main()
{
  printf("By Auto Storage Class");
  auto_sc(); // i=10
  auto_sc(); // i=10
  auto_sc(); // i=10
  printf("\nBy static Storage Class");
  static_sc(); // i=10
  static_sc(); // i=11
  static_sc(); // i=12

}