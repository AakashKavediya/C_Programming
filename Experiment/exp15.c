// Write a program to calculate and display sum of all the elements except diagonal elements of the matrix using function.


#include <stdio.h>

int main(){
    int rows, column, matrix1[10][10], sum = 0;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of column: ");
    scanf("%d", &column);
    printf("For matrix 1:\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            printf("Enter the value at [%d][%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<rows; i++){
        for(int j= 0; j<column; j++){
            if(i != j){
                sum += matrix1[i][j];
            }
        }
    }
    printf("The sum is: %d", sum);

    return 0;

}
