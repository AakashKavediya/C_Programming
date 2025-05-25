// Write a program to find GCD of given number using recursive function
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}


int main() {
    int a, b, gcd_result;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &a, &b);

    gcd_result = gcd(a, b);

    printf("GCD = %d\n", gcd_result);

    return 0;
}