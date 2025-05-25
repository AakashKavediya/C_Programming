//. Write a Program using function to reverse the given number

#include <stdio.h>

// Function prototype
void reverse(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);  // Call the function
}

void reverse(int n) {
    int temp, newNumber = 0;

    while (n != 0) {
        temp = n % 10;  // Extract last digit
        newNumber = newNumber * 10 + temp;  // Append to reversed number
        n = n / 10;  // Remove last digit
    } 

    printf("Reversed Number: %d\n", newNumber);
}
