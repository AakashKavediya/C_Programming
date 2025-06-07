    // 48. Write a program to convert a decimal number to binary format.

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, i = 0;
    long long binary = 0;  
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        int newNumber = temp % 2;
        binary += newNumber * pow(10, i);  
        temp /= 2;
        i++;
    }

    printf("The binary number is: %lld\n", binary);  

    return 0;
}
