// Write a program using pointers to display the contents of an array in reverse order.

#include <stdio.h>

void swapArray(int* arr, int* n) {
    for(int i = 0; i < *n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[*n - i - 1];
        arr[*n - i - 1] = temp;
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the value at %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    swapArray(arr, &n);

    
    for(int i = 0; i<n; i++){
        printf("%5d", arr[i]);
    }
    return 0;
}