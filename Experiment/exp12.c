#include <stdio.h>

// Recursive GCD function (handles negatives by absolute values)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// LCM function (checks for zero inputs)
int lcm(int a, int b) {
    // Handle zero input cases
    if (a == 0 || b == 0)
        return 0;
    // Ensure positive values for GCD calculation
    return (a * b) / gcd(a,b);
}

int main() {
    int a, b, gcd_result, lcm_result;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &a, &b);

    // Ensure positive inputs
    if (a < 0 || b < 0) {
        printf("Error: GCD/LCM are defined for positive integers.\n");
        return 1;
    }

    gcd_result = gcd(a, b);
    lcm_result = lcm(a, b);

    printf("GCD = %d\n", gcd_result);
    printf("LCM = %d\n", lcm_result);

    return 0;
}