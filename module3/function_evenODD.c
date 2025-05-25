// Write a Program to check entered number is even or odd using function.

#include <stdio.h>

// declare function prototype
int evenOdd(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    evenOdd(n);
}

int evenOdd(int n){
    if(n%2 == 0){
        printf("Even Number\n");
    }else{
        printf("Odd Number\n");
    }

}