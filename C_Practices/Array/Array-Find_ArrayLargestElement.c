// To Find Largest Element in Array

#include<stdio.h>
int getArrayElements(int number,int a[]);
int displayArrayElements(int number,int a[]);
int findMaximum(int number,int a[]);

int main()
{
  int number,a[10];
  printf("Enter the Number of Elements: ");
  scanf("%d",&number);
  getArrayElements(number,a);
  displayArrayElements(number,a);
  findMaximum(number,a);
}

int getArrayElements(int number,int a[])
{
  int i;
  printf("\nEnter the elements of the array:\n");
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

int findMaximum(int number,int a[])
{
  int i,max = a[0];
  for(i=0;i<number;i++)
  {
    if (max<a[i])
      max = a[i];
  }
  printf("\nLargest Array Element: %d",max);

}