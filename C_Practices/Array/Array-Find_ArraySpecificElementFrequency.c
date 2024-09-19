// To Find Frequency of Specific Element in Array

#include<stdio.h>
int getArrayElements(int,int a[]);
int displayArrayElements(int,int a[]);
int keyCount(int,int a[]);

int main()
{
  int number,a[10];
  printf("Enter the Number of Elements: ");
  scanf("%d",&number);
  getArrayElements(number,a);
  displayArrayElements(number,a);
  keyCount(number,a);
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

int keyCount(int number,int a[])
{
  int i,key,count=0;
  printf("\nEnter the Key element to search in array: ");
  scanf("%d",&key);
  for(i=0;i<number;i++)
  {
    if (a[i]==key)
    {
      count++;
    }
  }
  if (count == 0)
    printf("\n Key element Not Found in Array");
  else
    printf("The Frequency of Key Element is %d : %d",key,count);


}