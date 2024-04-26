#include<stdio.h>

int main()
{
  int arr[2][3][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i,j,k; // i-> TableSize, j-> Row, k-> Column
  printf("Multi-Dimensional Array:\n");

  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<4;k++)
      {
        printf("%3d",arr[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

}