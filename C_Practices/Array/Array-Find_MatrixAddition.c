// 2D Matrix Addition

#include<stdio.h>

int row,col,a[10][10],b[10][10],c[10][10],AddMatrix[10][10];

int getArrayElements(int MatrixElement[10][10]);
int displayArray(int dispMatrix[10][10]);
int MatrixAdd();

int main()
{
  printf("\nEnter number of rows and col: ");
  scanf("%d%d",&row,&col);

  printf("Enter First Matrix Elements:\n");
  getArrayElements(a);
  printf("Enter Second Matrix Elements:\n");
  getArrayElements(b);
  printf("Enter Third Matrix Elements:\n");
  getArrayElements(c);

  printf("First Matrix: \n");
  displayArray(a);
  printf("Second Matrix: \n");
  displayArray(b);
  printf("Third Matrix: \n");
  displayArray(c);

  printf("Matrix Addition: \n");
  MatrixAdd();
  displayArray(AddMatrix);
}

int getArrayElements(int MatrixElement[10][10])
{
  int i,j;
  
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&MatrixElement[i][j]);
    }
  }
}

int displayArray(int dispMatrix[10][10])
{
  int i,j;
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d ",dispMatrix[i][j]);
    }
    printf("\n");
  }
}

int MatrixAdd()
{
  int i,j;

  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      AddMatrix[i][j] = a[i][j] + b[i][j] + c[i][j];
    }
  }
  
}