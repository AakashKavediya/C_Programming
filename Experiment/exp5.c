// Write a program to check whether an entered number is prime number or not using for-loop.

#include <stdio.h>
#include <math.h>
int main(){
    int num ,Flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        Flag = 0;
    }else{
    for(int i = 2; i<=sqrt(num); i++){
        if(num % i == 0){
            Flag = 0;
            break;
        }
    }}
    if(Flag == 1){
        printf("%d is a Prime Number \n", num);
    }else{
        printf("%d is not a prime number\n",num);
    }
}