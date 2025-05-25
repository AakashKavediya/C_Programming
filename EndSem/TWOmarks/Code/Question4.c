//Write a C program to determine whether a given number is negative, positive or zero, using if-else statements.
#include <stdio.h> 
int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f", &n );
    if(n > 0){
        printf("The number is positive");
    }else if(n < 0){
        printf("The number is negative");
    }else{
        printf("The number is zero");
    }
    return 0;
}