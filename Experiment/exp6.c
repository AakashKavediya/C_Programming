    // Write a program to generate the following pattern using nested for loop.
    //     A 
    //   A B A 
    // A B C B A


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);  // Corrected here

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print ascending characters
        char ch = 'A';
        for (int k = 0; k <= i; k++) {
            printf("%c", ch++);
        }

        // Print descending characters
        ch -= 2;  // Step back to avoid repeating the middle character
        for (int k = 0; k < i; k++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
