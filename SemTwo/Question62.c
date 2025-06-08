// Write a program to find factorial of given number using recursive function

#include <stdio.h>

long long int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        n *= factorial(n-1);
    }
}

int main(){
    int n;
    long long int fact;

    printf("Enter a number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial = %d", fact);
}