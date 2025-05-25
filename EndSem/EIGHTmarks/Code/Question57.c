// Write a program to read and store n integers in an array, where the value of n is decided by the user.Find minimum and maximum numbers from the array.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the value [%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
    
    printf("The largest number is = %d\n", arr[n-1]);
    printf("The smallest number is = %d", arr[0]);

    return 0;
}