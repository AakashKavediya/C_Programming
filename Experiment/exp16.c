#include <stdio.h>
#include <string.h>

void main() {
    char fn[20], mm[20], ln[20], f_name[100];

    
    printf("Enter First name: ");
    scanf("%s", fn);
    
    printf("Enter Middle name: ");
    scanf("%s", mm);
    
    printf("Enter Last name: ");
    scanf("%s", ln);
    
    strcpy(f_name, fn);
    strcat(f_name, " ");
    strcat(f_name, mm);
    strcat(f_name, " ");
    strcat(f_name, ln);
    
    printf("My full name is %s", f_name);

}
