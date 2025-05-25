// Write a program to calculate and display the sum of first n natural number using while loop.

#include <stdio.h>

int main(){
    int sum = 0, n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        i++;
    }
    printf("The sum is: %d", sum);
}


//Result
// Enter a number: 10
// The sum is: 55