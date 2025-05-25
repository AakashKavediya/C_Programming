// Write a Program to generate Fibonacci series of 10 numbers using Function.

#include <stdio.h>

// Function prototype
int Fibonacci(int n);

void main(){
 int n; 
 printf("Enter a number: ");
 scanf("%d", &n);
 Fibonacci(n); 
}

int Fibonacci(int n){
    int first = 0, second = 1, next;
    for(int i = 0; i<n; i++){
        printf("%d, ",first);
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}