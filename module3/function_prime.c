// Write a Program to check entered number is Prime or not using function.

#include <stdio.h>

// declare function prototype
int prime(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    prime(n);
}

int prime(int n){
    int flag = 1;
    for(int i = 2; i<=n/2 ; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
        if(flag == 1){
            printf("Prime Number\n");
        }else{
            printf("Not a Prime Number\n");
        }
    }
}