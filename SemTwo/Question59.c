// 59. Write a program in C to find the sum of digits using do-while loop

#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    int original = n; 

    do {
        digit = n % 10;    
        sum += digit;       
        n = n / 10;         
    } while(n != 0);

    printf("The sum of digits of %d is = %d\n", original, sum);

    return 0;
}   
