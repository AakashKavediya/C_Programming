// WAP to find sum of digits using do-while loop.
#include <stdio.h>
int main(){
    int n, sum = 0, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    do{
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }while(n>0);
    printf("Sum of digits: %d", sum);
    
    
}