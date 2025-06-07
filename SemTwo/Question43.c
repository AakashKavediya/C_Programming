// 43. Write a program to count the number of digits, alphabets, and special characters in an input string.

#include <stdio.h>

int main() {
    int digits = 0, alpha = 0, special = 0, i;
    char str[120];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            alpha++;
        }
        else if(ch >= '0' && ch <= '9') 
        {
            digits++;
        }
        else if(ch != ' ' && ch != '\n') 
        {
            special++;
        }
    }

    printf("Alphabets: %d\n", alpha);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}