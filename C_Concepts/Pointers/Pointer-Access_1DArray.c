// different way to access 1D Array using Pointer

#include<stdio.h>

// (1)Normal way to access 1D Array:
// int main()
// {
//   int a[10],num,i;
//   printf("Enter the number of array element: ");
//   scanf("%d",&num);
//   printf("Enter Array Elements: ");
//   for(i=0;i<num;i++)
//     scanf("%d",&a[i]);
//   printf("Array: ");
//   for(i=0;i<num;i++)
//     printf("%d",a[i]);
// }

// (2)Array variable pointer
// int main()
// {
//   int a[10],num,i;
//   printf("Enter the number of array element: ");
//   scanf("%d",&num);
//   printf("Enter Array Elements: ");
//   for(i=0;i<num;i++)
//     scanf("%d",a+i);          // (a+i) is equivalent to &a[i]
//   printf("Array: ");
//   for(i=0;i<num;i++)
//     printf("%d",*(a+i));      // *(a+i) is equivalent to a[i]
// }

// (3)Using Pointer Variable
int main()
{
  int a[10],num,i;
  int *ptr = &a[0];                   // Initialize pointer ptr to first index of array
  printf("Enter the number of array element: ");
  scanf("%d",&num);
  printf("Enter Array Elements: ");
  for(i=0;i<num;i++)
    scanf("%d",ptr+i);         //increment pointer to hold in address
  printf("Array: ");
  for(i=0;i<num;i++)
    printf("%d",*(ptr+i));    //increment pointer to print from address
}