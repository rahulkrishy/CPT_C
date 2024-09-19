//  'enum(enumeration)'- is a user-defined data type that consists of a set of named constants, also known as enumerators. Each enumerator represents a unique value within the enumeration. 
// Enums are useful when you want to represent a fixed set of related values, such as days of the week, colors, or error codes, in a more human-readable and organized way. 

#include<stdio.h>

enum color{black,red,green,yellow,orange,white,blue};
enum pens{gel,ballpoint,greenPen,marker};
enum pencil{gelPencil,ballpointPencil,redPencil,greenPencil,markerPencil};

int main()
{
  printf("\nBlue color: %d",blue);
  printf("\nmarker: %d",marker);
  printf("\ngreenPencil: %d",greenPencil); 
}


