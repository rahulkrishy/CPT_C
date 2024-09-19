// To Access 2D Array using Pointer

// Keynote to pointer to array access:
// Address: &a[i][j] -> *(a+i)+j
// Value  : a[i][j]  -> *(*(a+i)+j)

#include<stdio.h>

int main()
{
  int a[10][10],row,col,i,j;
  printf("Enter the row & col of the matrix: ");
  scanf("%d%d",&row,&col);

  printf("\nEnter the %d elements of the array: ",row*col);
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
      scanf("%d",*(a+i)+j);

  printf("2D Array:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%3d",*(*(a+i)+j));
    }
    printf("\n");
  }
}