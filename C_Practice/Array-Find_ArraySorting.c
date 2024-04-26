// Sorting the Array

#include<stdio.h>
int getArrayElements(int,int a[]);
int displayArrayElements(int,int a[]);
int sortArrayElements(int,int a[]);

int main()
{
  int number,a[10];
  printf("Enter the Number of Elements: ");
  scanf("%d",&number);
  getArrayElements(number,a);
  displayArrayElements(number,a);
  sortArrayElements(number,a);
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

int sortArrayElements(int number,int a[])
{
  int i,j,temp;
  for(i=0;i<number;i++)
  {
    for(j=i+1;j<number;j++)
    {
      if(a[i]>a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("\nSorted Array:\n");
  displayArrayElements(number,a);
}