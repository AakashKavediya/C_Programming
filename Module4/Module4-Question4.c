// Write a program for addition of 2 matrix

#include <stdio.h>

void main(){
    int rows, column, matrix1[10][10],matrix2[10][10];
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
    printf("For matrix 2:\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            printf("Enter the value at [%d][%d]: ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("Result:\n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            printf("%5d",matrix1[i][j] + matrix2[i][j]  );
        }
        printf("\n");
    }
    return 0;

}
