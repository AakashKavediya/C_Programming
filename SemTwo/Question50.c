// 50. Write a program to find length of given string and copy one string into another string using user defined function.
#include <stdio.h>
#include <string.h>

int length(char source[]){
    int len = 0;
    while(source[len] != '\0'){
        len++;
    }
    return len;
}

void copy(char source[], char destination[], int len){
    for(int i = 0; i < len; i++){
        destination[i] = source[i];
    }    
}

int main(){
    char source[100], destination[100];
    int len;
    printf("Enter a string: ");
    gets(source);
    len = length(source);
    printf("The lenght is = %d\n", len);
    copy(source,destination,len);
    printf("The copied sentence = %s", destination);
}