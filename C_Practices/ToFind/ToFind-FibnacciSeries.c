// ToFind Fibonacci series upto nth number using Recursion
// Very low execution

# include<stdio.h>
int fibonacci_series(int);

int main()
{
  int number;
  printf("Enter the Number: ");
  scanf("%d",&number);
  fibonacci_series(number);
  return 0;
}

int fibonacci_series(int number)
{
  int i,first=0, second=1, next;
  printf("Fibonacci series: %d %d",first,second);

  for(i=2;i<=number;i++)
  {
    next = first+second;
    printf(" %d",next);
    first = second;
    second = next;
  }
}