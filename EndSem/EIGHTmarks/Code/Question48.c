// Write a program to display result of students by using nested if else.

#include <stdio.h>

int main(){
    float n;
    printf("Enter the marks of the student: ");
    scanf("%f", &n);
    if(n >= 90){
        printf("A Grade");
    }else{
        if(n < 90){
            if(n >= 80){
                printf("B Grade");
            }else{
                if(n <80){
                    if(n>=70){
                        printf("C Grade");
                    }else{
                        printf("D Grade");
                    }
                }
            }
        }
    }
}