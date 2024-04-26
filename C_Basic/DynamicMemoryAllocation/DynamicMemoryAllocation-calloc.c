// Dynamic Memory Management
// calloc - contiguous allocation(Allocates memory block, initializes all to zero) 
// syntax: *iptr = (datatype *)calloc(n,sizeof(datatype))

#include<stdio.h>
#include<malloc.h>

int main()
{
  int *iptr,num,i;
  printf("Enter number of elements: ");
  scanf("%d",&num);

  iptr = (int *)calloc(num,sizeof(int));  // Allocating memory address for pointer,points to start of the address // Ex: here num = 5 , then address allocated is 5,(sizeof(int))=20 and holds value zero.
                                           
  printf("Enter the elements: ");
  for(i=0;i<num;i++)
    scanf("%d",iptr+i);

  printf("\nElements: ");
  for(i=0;i<num;i++)
    printf("%d ",*(iptr+i));

  free(iptr);             // after execution memory allocated is deallocated // after clearing its holds value zero.
}