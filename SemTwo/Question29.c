// 29. Write a program in C to display n numbers of natural numbers and their sum.
#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        sum += i;
        printf("%d ", i);
    }
    printf("The sum is: %d", sum);
}