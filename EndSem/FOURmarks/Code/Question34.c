// Write a program to sort number of an array in ascending order using user defined function.

#include <stdio.h>

int sort(int *arr, int n){
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<n; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the value no %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr,n);
     for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

}