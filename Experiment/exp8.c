// Write a program to find binary equivalent of a given decimal number using as while loop.
#include <stdio.h>
#include <math.h>
//10 % 2 = 0
//5  % 2 = 1
//2  % 2 = 0    
//1  % 2 = 1


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