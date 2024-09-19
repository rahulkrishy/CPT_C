// To Find Frequency of All Element in Array

#include<stdio.h>
#include <limits.h>    // 'INT_MIN' representing the minimum value that can be held by an int data type. (place holder)

int getArrayElements(int number,int a[]);
int displayArrayElements(int number,int a[]);
int All_keyCount(int number,int a[]);

int main()
{
  int number,a[10];
  printf("Enter the Number of Elements: ");
  scanf("%d",&number);
  getArrayElements(number,a);
  displayArrayElements(number,a);
  All_keyCount(number,a);
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

int All_keyCount(int number,int a[])
{
  int i,j;
  for(i=0;i<number;i++)
  {
    int keyCount=1;
    for(j=i+1;j<number;j++)    // Count the frequency of the current element
    {
      if (a[i]==a[j])
      {
        keyCount +=1 ;
        a[j] = -1;            // Mark the element as visited
      }
    }
    if (a[i]!= -1)            // Print frequency if the element is not visited
      printf("\nElement %d occurs %d times",a[i],keyCount);
  }
}

// (Alter Visited Values)
// int All_keyCount(int number,int a[])
// {
//   int i,j;
//   for(i=0;i<number;i++)
//   {
//     int keyCount=1;
//     for(j=i+1;j<number;j++)    // Count the frequency of the current element
//     {
//       if (a[i]==a[j])
//       {
//         keyCount +=1 ;
//         a[j] = INT_MIN;            // Mark the element as visited
//       }
//     }
//     if (a[i]!= INT_MIN)            // Print frequency if the element is not visited
//       printf("\nElement %d occurs %d times",a[i],keyCount);
//   }
//   displayArrayElements(number,a);
// }

