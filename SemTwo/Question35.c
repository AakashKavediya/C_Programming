// 35. Write a program to find fibonnaci series upto n number using function.
#include <stdio.h>

int fico(int n){
    int next, first = 0, second = 1;
    for(int i = 1; i<=n; i++){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fico(n);
    
}