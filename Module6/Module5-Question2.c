// W.A.P To read the Text file and then print its content on the screen.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("Module6/main.txt", "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read and print each character until EOF
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
