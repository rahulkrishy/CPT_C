// To Find String Concatenate using Pointer String Access

#include <stdio.h>

int myStrcat(char *s1, char *s2);

int main()
{
    char str1[40], str2[20];
    printf("Enter the First String: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the Second String: ");
    fgets(str2, sizeof(str2), stdin);
    myStrcat(str1, str2);
    printf("Concatenated First String: %s ", str1);
    return 0;
}

int myStrcat(char *s1, char *s2)
{
    while (*s1 != '\0' && *s1 != '\n')
        s1++;
    *s1++ = ' ';
    while (*s2 != '\0')
        *s1++ = *s2++;
    *s1 = '\0';
}
