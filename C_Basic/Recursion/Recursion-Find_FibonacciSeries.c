// ToFind nth Fibonacci series number using Recursion
// Very fast execution compared to conventional way

# include<stdio.h>
int fibonacci_series(int);

int main()
{
  int number,result;
  printf("Enter the Number: ");
  scanf("%d",&number);
  result = fibonacci_series(number);
  printf("%d-Fibonacci Series number: %d",number,result);
}

int fibonacci_series(int number)
{
  if (number==0)
    return 0;
  else if (number==1)
    return 1;
  else 
    return (fibonacci_series(number-1)+fibonacci_series(number-2));
}