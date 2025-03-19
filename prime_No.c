//  WAP to print prime number between 1 to 100.
#include <stdio.h>
int main(){
    for(int i = 1; i<=100; i++){
        int flag = 1;
        for(int j = 2; j<=i/2; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);  // Print prime number
        }
    }
}