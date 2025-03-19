// Pattern program 4
//     A
//   A B A
// A B C B A

#include <stdio.h>
int main() {
    for(int i = 1; i<=3; i++){
        for(int j = 3; j>=i; j--){
            printf("   ");
        }
        for(int k = 65; k<=i+64; k++){  // Increasing order
            printf(" %c ",k);
        }
        for(int k = i+64-1; k>=65; k--){ // Decreasing order
            printf(" %c ",k);
        }
        printf("\n");
    }
   
}