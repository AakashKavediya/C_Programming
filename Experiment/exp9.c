// Write a program to find largest and second largest element of array.

#include <stdio.h>

int main(){
    int n,firstLargest = 0, secondLargest = 0, temp;
    printf("Enter the size of the Array: \n");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the %d number: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n The first largest = %d \n", arr[0]);
    printf("The second largest = %d \n", arr[1]);

}