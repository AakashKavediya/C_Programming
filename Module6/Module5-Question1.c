// W.A.P to swap two numbers using Pointers.

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d", &a,&b);
    printf("The number before swaping : a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("The number after swaping : a = %d, b = %d\n",a,b);
}