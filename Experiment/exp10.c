    // Write a program for multiplication of two (M*N) matrices.
    #include <stdio.h>

    int main(){
        int row1,column1, row2, column2;
        printf("Enter the no of rows and column: [i,j]: ");
        scanf("%d %d", &row1, &column1);
        int arr1[row1][column1];
        for(int i = 0; i<row1; i++){
            for(int j = 0; j< column1; j++){
                printf("Enter value [%d][%d]", i,j);
                scanf("%5d", &arr1[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i<row1; i++){
            for(int j = 0; j< column1; j++){
                // printf("Enter value [%d][%d]", i,j);
                printf("%5d", arr1[i][j]);
            }
            printf("\n");
        }

        
        printf("Enter the no of rows and column: [i,j]: ");
        scanf("%d %d", &row2, &column2);
        int arr2[row2][column2];
        for(int i = 0; i<row2; i++){
            for(int j = 0; j< column2; j++){
                printf("Enter value [%d][%d]", i,j);
                scanf("%5d", &arr2[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i<row2; i++){
            for(int j = 0; j< column2; j++){
                // printf("Enter value [%d][%d]", i,j);
                printf("%5d", arr2[i][j]);
            }
            printf("\n");
        }

         // Check if multiplication is possible
    if (column1 != row2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

        int arr3[row1][column2]; 

        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                arr3[i][j] = 0;
                for(int k = 0; k < column1; k++){
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        

        printf("\nResultant Matrix C (A x B):\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column2; j++) {
                printf("%5d", arr3[i][j]);
            }
            printf("\n");
        }
    }
