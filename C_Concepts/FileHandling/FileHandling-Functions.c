// Various File Handling Functions in C

#include<stdio.h>

int main()
{

  //(1) Rename the file
  const char* old_file_path ="D:/Baymax/_Technamite/CodeBase/C/example.txt";
  const char* new_file_path ="D:/Baymax/_Technamite/CodeBase/C/justFun.txt";
  if(rename(old_file_path,new_file_path)==0)
    printf("\nFile renamed successfully");
  else
    perror("\nError renaming the file");

  //(2) Delete the file
  const char* file_path ="D:/Baymax/_Technamite/CodeBase/C/newFile.txt";
  int status;
  status = remove(file_path);
  if(status==0)
    printf("\nFile deleted successfully.");
  else
    perror("\nError in deleting the file");

  //(3) ferror -to check if an error flag is set for a file
  FILE *file = fopen("example.txt", "r");
  if (file == NULL) {
      perror("Error opening file");
  } else {
      int c = fgetc(file);
      if (ferror(file)) {
          perror("Error reading from file");
      } else {
          // Continue processing the character read from the file.
      }
      fclose(file);
  }

  //(4) clearerr -to clear any error flags for a file, allowing subsequent I/O operations to be checked for errors without interference from previous errors.
  FILE *file = fopen("example.txt", "r");
  if (file == NULL) {
      perror("Error opening file");
  } else {
      clearerr(file);  // Clear any error flags set during file opening.
      int c = fgetc(file);
      if (ferror(file)) {
          perror("Error reading from file");
      } else {
          // Continue processing the character read from the file.
      }
      fclose(file);
  }

  //(5) rewind -to reset the file pointer to the beginning of the file after the initial read.
  FILE *file = fopen("example.txt", "r");
  if (file == NULL) {
      perror("Error opening file");
      return 1;
  }
  // Read and process data from the file
  char line[100];
  while (fgets(line, sizeof(line), file) != NULL) {
      printf("%s", line);
  }
  // Reset the file pointer to the beginning
  rewind(file);
  // Read and process data from the file again
  while (fgets(line, sizeof(line), file) != NULL) {
      printf("%s", line);
  }
  fclose(file);

  //(6) tmpfile -To create a unique temporary file with a unique name and opens it for binary read and write operations.
  FILE *tempFile = tmpfile();
  if (tempFile != NULL) {
      fprintf(tempFile, "This is a temporary file.");
      // Perform read/write operations on tempFile
      fclose(tempFile); // The file will be automatically deleted when closed
  }

  //(7) tmpnam -is used to generate a unique filename for a temporary file.
  char filename[L_tmpnam];
    tmpnam(filename);
    FILE *tempFile = fopen(filename, "w");
    if (tempFile != NULL) {
        fprintf(tempFile, "This is a temporary file.");
        // Perform read/write operations on tempFile
        fclose(tempFile);
        // You should delete the temporary file when done
        remove(filename);
    }

  return 0;
}