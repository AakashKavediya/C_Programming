// Write a Program to calculate square of a number using function.

#include <stdio.h>
#include <math.h>

//Declare function prototype
int square(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = square(n);
    printf("Square of %d is %d", n, result);
    return 0;
}

int square(int n){
    return n * n;;
}