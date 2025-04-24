// Write a program to find value of BIO using function, where BIO is defined as BIO= n!/(r!(n-r)!), n and r are natural numbers.
#include <stdio.h>

// Function to calculate factorial using long long
long long int fact(int n) {
    long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient
long long int bio(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r,result;
    
    printf("Enter two numbers (n and r): ");
    scanf("%d %d", &n, &r);
    
    // Basic input validation
    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input: n and r must be non-negative with n >= r.\n");
        return 1;
    }
    result =  bio(n, r);
    printf("Binomial coefficient = %lld\n",result);
    
    return 0;
}