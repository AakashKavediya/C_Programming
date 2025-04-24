// Write a program to check whether entered string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i,length,flag=0;
    printf("Enter a string:");
    scanf("%s",string);
    length=strlen(string);
    for(i=0;i<length/2;i++){
        if(string[i]!=string[length-i-1])
        {
            flag=1;
            break;
        }

    }
    if(flag)
    {
        printf("%s is not a Palindrome.",string);

    }
    else{
        printf("%s is  a Palindrome.",string);

    }
    return 0;
}
