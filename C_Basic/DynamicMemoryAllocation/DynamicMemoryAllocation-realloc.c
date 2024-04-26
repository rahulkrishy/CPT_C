// Dynamic Memory Management
// realloc - reallocate(adjust the size of the memory block while preserving the existing data) 
// syntax: new_ptr = (datatype *)realloc(old_ptr,new_size)

#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
  char *name;
  name = (char *)malloc(10*sizeof(char));  // initially allocating memory using malloc()
  strcpy(name,"Bangalore");
  printf("\nString: %s is of address: %p\n",name,name);

  // if we need to increment or decrement size , then use realloc()
  name = (char *)realloc(name,20*sizeof(char));
  strcat(name,"City");
  printf("\nString: %s is of address: %p\n",name,name);
  free(name);             // after execution memory allocated is deallocated 
}