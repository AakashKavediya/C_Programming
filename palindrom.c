// WAP to check entered number is palindrome or not
#include <stdio.h> 

int main() {
    int n, temp, newNumber = 0, rev;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // Store original number

    while (temp != 0) {
        rev = temp % 10;  // Get last digit
        newNumber = newNumber * 10 + rev;  // Reverse number
        temp = temp / 10;  // Remove last digit
    }

    printf("Reversed Number: %d\n", newNumber);

    if (newNumber == n) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}

