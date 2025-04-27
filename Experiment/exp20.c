// Write a program to copy the contents of one file to another file.

#include <stdio.h>

int main(){
    FILE *ptr  = NULL;
    ptr = fopen("myfile.txt","r");
    char str[50] ; 
    fgets(str,50, ptr);
    printf("The character I need was: %s\n",str);
    fclose(ptr);
    return 0;
}