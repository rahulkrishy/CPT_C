// To Find Transpose of the Matrix

#include<stdio.h>

void getArrayElements(int a[10][10],int row,int col);
void displayArray(int a[10][10],int row,int col);
void transposeArray(int a[10][10],int row,int col);

int main()
{
  int row,col,a[10][10];
  printf("\nEnter number of rows and col: ");
  scanf("%d%d",&row,&col);
  getArrayElements(a,row,col);
  displayArray(a,row,col);
  transposeArray(a,row,col);
}

void getArrayElements(int a[10][10],int row,int col)
{
  int i,j;
  printf("Enter Array Elements:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
}

void displayArray(int a[10][10],int row,int col)
{
  int i,j;
  printf("Array:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%2d ",a[i][j]);
    }
    printf("\n");
  }
}

void transposeArray(int a[10][10],int row,int col)
{
  int i,j;
  printf("Transpose Array:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%2d ",a[j][i]);
    }
    printf("\n");
  }
}