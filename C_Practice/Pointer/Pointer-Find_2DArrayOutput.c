#include<stdio.h>

int main()
{
  int x[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  printf("\n %u \n%u \n%u \n%u",x,x+3,*(x+3),*(x+2)+3);
}

// x => 6422256 (base address)

// x+3 => (base address) + (3 rows)*(no.of.elements in column)*(sizeof(datatype))
// so, x+3 => (6422256) + (3*3*4) => 6422292

// *(x+3) => In 2D dimensional array, *(x+3) 'single asterisk' still mention address(only double asterisk shows value)
// so, *(x+3) => 6422292 (base address of x+3)

// *(x+2)+3 => here 2-> rows and 3-> columns
// so, *(x+2)+3 => 6422256 + (2)*3*4 + (3)*4 = 6422292