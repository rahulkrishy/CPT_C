// Various ways to write and read files in C:

// "r": Read mode.
// "w": Write mode (creates a new file or truncates an existing one).
// "a": Append mode (creates a new file or appends to an existing one).
// "rb": Read in binary mode.
// "wb": Write in binary mode.

#include<stdio.h>

int main()
{
  FILE *file;

  // Writing Files(3) 
  file = fopen("sample.txt","w");

  //(1) fprintf -It writes formatted data to the file.
  if (file != NULL) {
    fprintf(file,"First Text\n");
    // fclose(file);
  }

  //(2) fputc -Write a character to a file.
  char ch = 'a';
  if (file != NULL) {
    fputc(ch, file);
    // fclose(file);
  }

  //(3) fputs -Write a string to a file.
  char text[] = "\nHello again\n\n"; // [] represent to store upto string size
  if (file != NULL) {
    fputs(text, file);
    fclose(file);
  }

  // (4) "wb": Write in binary mode(for ".dat" file type).
  // fwrite -Writes binary data (character array) to the file in binary mode.
  // FILE *file;
  // char data[] = "Hello, World!";
  // file = fopen("binary.dat", "wb");
  // if (file != NULL) {
  //     size_t dataSize = sizeof(data);
  //     fwrite(data, 1, dataSize, file);
  //     fclose(file);
  // }

  // Reading Files(2)

  //(1) fgetc -Read a file character by character until it reaches the end of the file (EOF).
  file = fopen("sample.txt", "r");
  char cha;
  if (file != NULL) {
      while ((cha = fgetc(file)) != EOF) {
          // Process character 'ch'
          printf("%c",cha);
      }
      fclose(file);
  }

  // (2) fgets -Reads one line at a time from the file until the end of the file is reached.
  file = fopen("sample.txt", "r");
  char buffer[100];
  if (file != NULL) {
      while (fgets(buffer, sizeof(buffer), file) != NULL) {
          // Process line stored in 'buffer'
          printf("%s", buffer); // Print each line to the console
      }
      fclose(file);
  }

  // (3) "rb": Read in binary mode(for ".dat" file type)
  // fread -Reads binary data from the file in chunks and processes each chunk.
  // FILE *file;
  // char buffer[1024];
  // file = fopen("binary.dat", "rb");
  // if (file != NULL) {
  //     size_t bytesRead;
  //     while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
  //       // Process 'bytesRead' bytes of data in 'buffer'
  //         printf("%s", buffer);
  //     }
  //     fclose(file);
  // }

}

