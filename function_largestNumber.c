// write a program to find largest number among three numbers using function.

#include <stdio.h>

// declare function prototype
int largestNumber(int num1 , int num2, int num3);

int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    largestNumber(num1, num2, num3);
}

int largestNumber(int num1 , int num2, int num3){
    if(num1 > num3){
        if(num1 > num2){
            printf("Largest number is: %d", num1);
        }else{
            printf("Largest number is: %d", num2);
        }
    }else{
        if(num3 > num1){
            if(num3 > num2){
                printf("Largest number is: %d", num3);
        }else{
            printf("Largest number is: %d", num2);
        }
    }
}
}