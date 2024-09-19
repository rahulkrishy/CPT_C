// To Find Random Number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  srand(time(NULL));               // Seed the random number generator
  int random_num = rand() % 100 +1;  // Generate a random number between 1 and 100
  printf("Random number: %d",random_num);
}