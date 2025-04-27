// Write a program to accept N elements of an array and to sort and display them in ascending order using function.11


#include <stdio.h>

int main(){
    //initialize the array and take the int input from user
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter the value [%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
        if(arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
    
    for(int i = 0; i<n; i++){
        printf("%5d",arr[i]);
    }
    return 0;

}
