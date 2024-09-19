// Dynamic Memory Management
// malloc - memory allocation(Allocates memory block)
// syntax: *iptr = (datatype *)malloc(n*sizeof(datatype))

#include<stdio.h>
#include<malloc.h>

int main()
{
  int *iptr,num,i;
  printf("Enter number of elements: ");
  scanf("%d",&num);

  iptr = (int *)malloc(num*sizeof(int));  // Allocating memory address for pointer,points to start of the address // Ex: here num = 5 , then address allocated is 5*(sizeof(int))=20 and holds garbage values.
                                           
  printf("Enter the elements: ");
  for(i=0;i<num;i++)
    scanf("%d",iptr+i);

  printf("\nElements: ");
  for(i=0;i<num;i++)
    printf("%d ",*(iptr+i));

  free(iptr);             // after execution memory allocated is deallocated // after clearing its holds garbage values.
}