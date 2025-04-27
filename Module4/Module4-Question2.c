// Write a program to find the reverse of string without using standard library function

#include <stdio.h>

void main(){
    char string[100];
    int  count = 0;

    printf("Enter the string");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; string[i] != '\0' ; i++){
        count++;
    }

    for(int i = 0 ; i< count/2; i++){
        char temp = string[count - i - 1];
        string[count - i - 1] = string[i];
        string[i] = temp;
    }
    printf("Reversed string: %s\n", string);

}
