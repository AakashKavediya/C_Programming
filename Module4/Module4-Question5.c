// Write a program for multiplication of 2 matrix

#include <stdio.h>

int main(){
    int rows1, column1, rows2, column2, matrix1[10][10],matrix2[10][10];
   //FOr martix 1
   printf("For matrix 1:\n");
   printf("Enter numbers of rows: ");
   scanf("%d", &rows1);
   printf("Enter no. of column: ");
   scanf("%d", &column1);
   for(int i = 0; i<rows1; i++){
    for(int j = 0; j<column1; j++){
        printf("Enter the value at Matrix[%d][%d]: ",i,j);
        scanf("%d", &matrix1[i][j]);
    }
   }

   // For matrix 2
   printf("For matrix 2:\n");
   printf("Enter numbers of rows: ");
   scanf("%d", &rows2);
   printf("Enter no. of column: ");
   scanf("%d", &column2);
   for(int i = 0; i<rows2; i++){
    for(int j = 0; j<column2; j++){
        printf("Enter the value at Matrix[%d][%d]: ",i,j);
        scanf("%d", &matrix2[i][j]);
    }
   }

   if (column1 != rows2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    //Initialize the result matrix
    int matrix3[10][10] = {0};

    // Matrix multiplication logic
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < column2; j++) {
            for(int k = 0; k < column1; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the result matrix
    printf("Resultant Matrix:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < column2; j++) {
            printf("%5d", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;

}
