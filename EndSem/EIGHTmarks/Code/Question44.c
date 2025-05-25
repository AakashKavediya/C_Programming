// Write a program to convert a decimal number to binary format.


#include <stdio.h>
#include <math.h>


int main(){
    int n, temp,result = 0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    temp = n;
    int count = 1;
    while(temp != 0){
        int digit = temp%2;
        temp /= 2;
        result += digit*count;
        count *= 10; 
    }
    printf("The result = %d", result);

}