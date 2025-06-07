// 31. Write a program to check if the user entered number is divisible by 10 or not..
#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n % 10 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    
}