// Write a C program to determine whether a given number is negative, positive or zero, using if-else statements.

#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter any 3 number: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a > b && a > c){
        printf("The largest number is: %.2f",a);
    }else if(b > a && b > c){
        printf("The largest number is: %.2f",b);
    }else{
        printf("The largest number is: %.2f",c);
    }
}