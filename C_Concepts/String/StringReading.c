#include <stdio.h>

int main()
{
    int i = 0;
    char str[10], ch;

    printf("Enter a string (up to 9 characters): ");

    while (i < 9)      // Change the loop condition to read up to 9 characters
    {
      ch = getchar();  // Use getchar to read a 'character'
      if (ch == '\n' || ch == EOF) // Stop reading at newline or end-of-file
        break;
      str[i] = ch;
      i++;
    }

    str[i] = '\0';    // Null-terminate the string
    printf("Entered string: %s\n", str);
    return 0;
}

// string_Basics: 

// Three ways of Reading the string
// 1) scanf() -> reads upto space/newLine 
// 2) gets() -> reads entire input
// 3) getchar() -> character by character reading

// Three ways of Printing the string
// 1) printf()
// 2) puts()
// 3) putchar() -> character by character iterate printing 
