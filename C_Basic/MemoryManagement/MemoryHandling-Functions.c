// Memory Handling Functions (5) -These functions are essential for tasks involving data manipulation, string processing, and memory management in C

#include <stdio.h>
#include <string.h>

// (1) memchr (Memory Character) - Used for searching a character in a block of memory.

  // memchr searches for the first occurrence of a character (ch) in the first n bytes of the given memory block (str).
  // It returns a pointer to the first occurrence if found, otherwise, it returns NULL.

    int main() {
        const char str[] = "Hello, World!";
        const char ch = 'W';
        const size_t n = sizeof(str);
  
        // Find the first occurrence of 'W' in str
        const char *result = (char*) memchr(str, ch, n);
  
        if (result != NULL) {
            printf("'%c' found at position %ld.\n", ch, result - str + 1);
        } else {
            printf("'%c' not found in the string.\n", ch);
        }
  
        return 0;
    }


// (2) memcmp (Memory Compare) - Used for comparing two blocks of memory.

    // memcmp compares the first n bytes of two memory blocks (str1 and str2).
    // It returns 0 if the blocks are equal, a positive value if the first differing byte in str1 is greater, and a negative value if it's less.   

    //     int main() {
    //     const char str1[] = "Hello";
    //     const char str2[] = "Hello";
    //     const size_t n = sizeof(str1);

    //     // Compare the first n bytes of str1 and str2
    //     int result = memcmp(str1, str2, n);

    //     if (result == 0) {
    //         printf("Both strings are equal.\n");
    //     } else {
    //         printf("Strings are not equal.\n");
    //     }

    //     return 0;
    //    }

// (3) memcpy (Memory Copy) - Used for copying a block of memory from one location to another.

    // memcpy copies n bytes from the source memory block (source) to the destination memory block (destination).

    // int main() {
    //     const char source[] = "Copy me!";
    //     char destination[20];

    //     // Copy the content of source to destination
    //     memcpy(destination, source, strlen(source) + 1);

    //     printf("Copied string: %s\n", destination);

    //     return 0;
    // }

// (4) memmove (Memory Move) - Used for moving a block of memory, handling overlapping regions correctly.

    // memmove moves n bytes from the source memory block (str) to the destination memory block (buffer).
    // Unlike memcpy, memmove handles overlapping memory regions correctly.

    // int main() {
    //     char str[] = "Hello, World!";
    //     char buffer[20];

    //     // Move the first 5 characters from str to buffer
    //     memmove(buffer, str, 5);

    //     // Null-terminate the buffer to ensure it's a valid C string
    //     buffer[5] = '\0';

    //     printf("str: %s\n", str);
    //     printf("Buffer after memmove: %s\n", buffer);
    //     printf("str: %s\n", str);
    //     return 0;
    // }

// (5) memset (Memory Set) - Used for setting a block of memory to a specific value.

    // memset sets the first n bytes of the memory block (str) to the specified value ('k' in this case).

    // int main() {
    //     char str[] = "Hello";

    //     // Set the first 3 characters of str to 'k'
    //     memset(str, 'k', 3);

    //     printf("Modified string: %s\n", str);

    //     return 0;
    // }



