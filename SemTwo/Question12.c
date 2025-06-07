// 12. Write a C program that calculates the factorial of an integer using recursion
#include <stdio.h>

long long int factorial(int n, long long int sum){
    if(n == 1){
        return sum;
    }
    sum *= n;
    factorial(n-1, sum);
    
}

int main(){
    int n;
    long long int result, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n, sum);
    printf("The factorial is: %lld", result);
}