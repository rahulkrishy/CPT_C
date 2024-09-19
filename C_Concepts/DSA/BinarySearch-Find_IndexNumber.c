// To Do Binary search to find the index of a target number in a sorted array
// Binary search only performed for sorted array

#include<stdio.h>

int checkIndex(int num[],int target_num, int low, int high);

int main()
{
int num[7] = {1,2,3,4,5,6,7};
int size = (sizeof(num)/sizeof(num[0]));
int target_num = 2;
int low = 0 ;
int high = size-1;
printf("%d",checkIndex(num,target_num,low,high));
}

int checkIndex(int num[], int target_num, int low, int high)
{
  while(low<=high)
  {
    int mid = (low+high)/2;

    if (target_num == num[mid])
      return mid;
    else if (num[mid] < target_num)
      low = mid +1;
    else
      high = mid-1;
  }
  return -1;
}