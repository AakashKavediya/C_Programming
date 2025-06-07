// 28. Write a program to calculate and display the sum of first n natural number using while loop.

#include <stdio.h>

int main(){
    int n, sum = 0 ;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n;
        n -= 1;
    }
    printf("The sum is: %d", sum);
}