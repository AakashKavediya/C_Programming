// Write a program to print the sum of 10 natural number entered using keyboard

#include <stdio.h>

int main(){
    int n, arr[10], sum = 0;
    printf("Enter 10 Intiger number\n");
    for(int i = 0; i<10; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<10; i++){
        sum += arr[i];
    }
    printf("The total sum: %d",sum);
    return 0;
}