// 7. Write a C program to check entered number is prime or not.
#include <stdio.h>
#include <math.h>

int main(){
    int a, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a <= 1){
        printf("It is not a prime number");
    }else{
        for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0){
            flag = 1;
            break;
        }
    }
    }

    if(flag == 0){
        printf("The number is a prime number");
    }else{
        printf("The number is not a prime number");
    }
}