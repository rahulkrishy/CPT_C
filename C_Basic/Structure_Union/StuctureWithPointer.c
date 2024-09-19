// Structure & Pointers Accessing:

#include<stdio.h>

// (1) Pointer accessing the structure:

struct data
{
  int num;
  char name[50];
};
int main()
{
  struct data a={007,"batman"},*b;
  b = &a;
  printf("\nNumber: %d Name: %s ",b->num,b->name); // arrow operator are used for pointer access 
}

// (2) stucture containing pointer:

// struct data
// {
//   char letter;
//   char *Label;
// };

// int main()
// {
//   struct data a;
//   char title = 'r';
//   a.letter = title;
//   a.Label = &a.letter;          // assigning one member to another pointer member in stucture
//   printf("Letter: %c",a.letter);
//   printf("\nAddress: %u",a.Label);
// }

// (3) Self-referential structure - Stucture containing pointer pointing to same type:
// struct node                  // node has two parts: data and address part(pointing to next node)
// {
//   int data;
//   struct node *next;         // this point to similar next struct node
// };
