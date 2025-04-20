// Write a program to accept three numbers and display largest of three using a nested if else statement

#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter any 3 number: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("\n%.2f is the largest number", a);
        }else{
            printf("\n%.2f is the largest number",c);
        }
    }else{
        
        if(b>c){
            printf("\n%.2f is the largest number", b);
        }else{
            printf("\n%.2f is the largest number",c);
        }
    }
}