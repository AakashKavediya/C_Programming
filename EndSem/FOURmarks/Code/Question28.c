// Write a program in C to display n numbers of natural numbers and their sum.

#include <stdio.h>

int main(){
    int n, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d, ", i);
        sum += i;
    } 
    printf("Sum = %d", sum);
}

// Enter a number: 10
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, Sum = 55