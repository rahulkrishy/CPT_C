// The program should generate a random number between 1 and 100, and allow the user to guess the number. 
// The user should be prompted to enter their guess, and the program should respond with either "Too high", "Too low", or "Correct!" depending on the user's guess with attempt count.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  printf("\nWelcome to Guessing game!");
  int guess_num,attempt=1;
  srand(time(NULL));                   // Seed the random number generator
  int random_num = (rand() % 100) +1;  // Generate a random number between 1 and 100

  printf("\nRandom Number: %d",random_num) ;

  printf("\nEnter your Guess Number between 1 to 100: ");

  do
  {
    scanf("%d",&guess_num);

    if(guess_num > random_num)
    {
      printf("\nGuess Number is greater than random number:");
      attempt++;
    }
    else if (guess_num < random_num)
    {
      printf("\nGuess Number is lesser than random number:");
      attempt++;
    }
    else
    {
      printf("\n\nCheers!,Guess Number '%d' is Correct! | attempt: %d",guess_num,attempt);
    }

  } while (guess_num != random_num);

  return 0;
  
}