// Reverse the Array Elements

#include<stdio.h>
int getArrayElements(int number,int a[]);
int displayArrayElements(int number,int a[]);
int reverseArray(int number,int a[]);

int main()
{
  int number,a[10];
  printf("Enter the Number of Elements: ");
  scanf("%d",&number);
  getArrayElements(number,a);
  displayArrayElements(number,a);
  reverseArray(number,a);
}

int getArrayElements(int number,int a[])
{
  int i;
  printf("Enter the elements of the array:\n");
  for(i=0;i<number;i++)
  {
    scanf("\n%d",&a[i]);
  }
}

int displayArrayElements(int number,int a[])
{
  int i;
  printf("Array:\t");
  for(i=0;i<number;i++)
  {
    printf("%d ",a[i]);
  }
}

int reverseArray(int number, int a[])
{
  int start=0,end=number-1,temp;

  while(start<end)
  {
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;

    start++;
    end--;
  }
  printf("\nReversed ");
  displayArrayElements(number,a);
}