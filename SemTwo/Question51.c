// 51. Write a C program that copies the contents of one text file into another.

#include <stdio.h>

int main(){
    char sourceFile[100], destinationFile[100],ch;
    FILE *source, *destination;
    
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of destination file: ");
    scanf("%s", destinationFile);

    source = fopen(sourceFile,"r");
    if(source == NULL){
        printf("Error: File can not be open");
        return 1;
    }

    destination = fopen(destinationFile, "w");
    if(destination == NULL){
        printf("Error: File can not be open");
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch,destination);
    }
      printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}