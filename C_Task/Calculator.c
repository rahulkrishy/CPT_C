// Basic Calculator Program:

#include<stdio.h>

int main()
{
  char operator;
  double num1,num2,result;

  while(1)
  {
    printf("\nEnter the operator('+' '-' '*' '/' ) or 'q' to Quit: ");
    scanf(" %c",&operator);

    if(operator == 'q')
    {
      printf("\nProgram Concluded.");
      break;
    }

    printf("\nEnter two numbers: ");
    scanf("%lf%lf",&num1,&num2);
    switch (operator)
    {
    case '+':
      result = num1+num2;
      break;
    case '-':
      result = num1-num2;
      break;
    case '*':
      result = num1*num2;
      break;
    case '/':
      if(num2!= 0)
      {
        result = num1/num2;
        break;
      }
      else
      {
        printf("\nCan't Divide , number2 is zero");
        continue;;
      }
    default:
      printf("\nInvalid , Try again...");
      continue;;
    }

  printf("\n%.2lf %c %.2lf = %.2lf",num1,operator,num2,result);
  }
}
    