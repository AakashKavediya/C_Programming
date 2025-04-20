// Write a program to accept the temperature in Celsius and to convert and display it in Fahrenheit.
#include <stdio.h>

int main(){
    float cel,fer;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);
    fer = (1.8*cel)+32;
    printf("The temperature in Fahrenheit = %f", fer);
}