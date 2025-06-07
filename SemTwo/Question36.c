//File Question 
// 36. Write a C program that copies the contents of one text file into another. ask the user for the name of the file
#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file %s\n", sourceFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Cannot open destination file %s\n", destFile);
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(dest);

    return 0;
}
