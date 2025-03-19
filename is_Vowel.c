//Write a program to accept any character as input and print whether it is vowel or not using switch case.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);
    switch(ch){
        case 'a':
        printf("It is a vowel");
        break;
        case 'e':
        printf("It is a vowel");
        break;
        case 'i':
        printf("It is a vowel");
        break;
        case 'o':
        printf("It is a vowel");
        break;
        case 'u':
        printf("It is a vowel");
        break;
        case 'A':
        printf("It is a vowel");
        break;
        case 'E':
        printf("It is a vowel");
        break;
        case 'I':
        printf("It is a vowel");
        break;
        case 'O':
        printf("It is a vowel");
        break;
        case 'U':
        printf("It is a vowel");
        break;
        default:
        printf("It is not a vowel");
        break;
    }
}