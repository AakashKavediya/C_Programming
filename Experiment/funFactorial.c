// Write a program to check whether entered string is palindrome or not.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 10000000  // Adjust based on expected result size

// Function to multiply a number represented as an array of digits
void multiply(int *result, int *len, int multiplier) {
    int carry = 0;
    for (int i = 0; i < *len; i++) {
        int product = result[i] * multiplier + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    
    while (carry) {
        result[*len] = carry % 10;
        carry /= 10;
        (*len)++;
    }
}

// Function to calculate factorial of large numbers
void factorial(int n) {
    int *result = (int *)calloc(MAX_DIGITS, sizeof(int));
    result[0] = 1;
    int len = 1;
    
    for (int i = 2; i <= n; i++) {
        multiply(result, &len, i);
    }
    
    // Print the result in reverse (since we stored LSD first)
    printf("%d! has %d digits:\n", n, len);
    
    // For very large numbers, you might want to save to file instead
    FILE *fp = fopen("factorial.txt", "w");
    for (int i = len - 1; i >= 0; i--) {
        fprintf(fp, "%d", result[i]);
    }
    fclose(fp);
    
    printf("Result saved to factorial.txt\n");
    free(result);
}

int main() {
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    factorial(n);
    return 0;
}