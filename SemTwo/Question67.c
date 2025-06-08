// 67. Write a program to find largest of three numbers using ternary operator
#include <stdio.h>

int main(){
    float a,b,c,largest;
    printf("Enter any three value: ");
    scanf("%f %f %f",&a,&b,&c );
    largest = a>b?a:b;
    largest = largest>c?largest:c;
    printf("The largest value is: %f", largest);
}
