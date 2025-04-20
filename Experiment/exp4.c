// Write a program to implement an arithmetic calculator for addition, subtraction, multiplication, division and modulo operation using switch case.

#include <stdio.h>

int main() {
    float num1, num2;
    char choice; 
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the operation (+, -, *, /, %)");
    scanf(" %c ", &choice);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    switch (choice)
    {
        case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
        case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
        case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
        case '%':
        printf("%d %% %d = %d", (int)num1, (int)num2, (int)num1 % (int)num2);
        break;
    
    default:
        break;
    }    
}
