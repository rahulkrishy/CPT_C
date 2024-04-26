#include <stdio.h>

int main() {
    // Writing to a file

    FILE *file;  // Declare a file pointer
    file = fopen("example.txt", "w"); // Open/Create a file in write mode

    // Error Handling: Always check if the file was successfully opened.
    if (file == NULL) {
        printf("\nError opening file");
        return 1;
    }

    // Write to the file
    fprintf(file, "Hello_File!\n");
    fprintf(file, "This is a test.\n");

    // Close the file
    fclose(file);

    // Reading from the same file

    file = fopen("example.txt", "r"); // Open in read mode

    if (file == NULL) {
        printf("\nError opening file");
        return 1;
    }

    // Read by 'fgets':
    char buffer[100]; // Fixed-size buffer to store each line
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // Print each line to the console
    }
    // Close the file
    fclose(file);

    // Read by 'fgetc': 
    // char ch;
    // if (file != NULL) 
    // {
    //     while ((ch = fgetc(file)) != EOF) 
    //     {
    //     // Process character 'ch'
    //     printf("%c",ch);
    //     }
    // fclose(file); 
    // }

    return 0;
}
