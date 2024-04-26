// Referring function using Pointer

#include<stdio.h>
int addition(int a,int b);
int subtraction(int a,int b);

int main()
{
  int (*ptr1)(),(*ptr2)() ;             // pointer to function declaration
  int a,b,result; 
  ptr1 = &addition;                    // pointer to address the function (assigning)
  ptr2 = &subtraction;

  printf("Enter a and b value:");
  scanf("%d%d",&a,&b);
  result = (*ptr1)(a,b);               //Pointer to addition function calling
  printf("Addition: %d",result);
  result = (*ptr2)(a,b);               //Pointer to subtraction function calling
  printf("\nSubtraction: %d",result);
}

int addition(int a,int b)
{
  return a+b;
}

int subtraction(int a,int b)
{
  return a-b;
}