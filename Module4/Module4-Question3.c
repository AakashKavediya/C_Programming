// Write a program for transpose of matrix 

#include <stdio.h>

// 01 02 03
// 11 12 13
// 21 22 22

void main(){
    int rows, column, matrix[10][10];
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of column: ");
    scanf("%d", &column);
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            printf("Enter the value at [%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            printf("%5d",matrix[j][i]);
        }
        printf("\n");
    }

}
