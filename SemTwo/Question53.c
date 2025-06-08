// 53. Write a program to display result of students by using nested if else.
#include <stdio.h>

int main(){
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);
    if(n >= 90){
        printf("A grade");
    }else{
        if(n >=80){
            printf("B Grade");
        }else{
            if(n >= 70){
                printf("C Grade");
            }else{
                if(n >= 60){
                    printf("D Grade");
                }else{
                    if(n <60){
                        printf("Padhle bhai");
                    }
                }
            }
        }
    }
}