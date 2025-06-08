    // 52. Write a program to concatenate the given strings and check whether given string is palindrome or not.
    #include <stdio.h>
    #include <string.h>


    int main(){
        char sentence1[150], sentence2[150], sentence[300];
        int len = 0, flag = 0;
        printf("Enter a sentence 1: ");
        gets(sentence1);

        printf("Enter a sentence 2: ");
        gets(sentence2);

        strcpy(sentence, sentence1);
        strcat(sentence," ");
        strcat(sentence,sentence2);
        printf("The sentence is ==> %s", sentence);

        while (sentence[len] != '\0')
        {
            len++;
        }
        printf("The length of the sentence = %d", len);
        for(int i = 0; i<len; i++){
            if(sentence[i] !=   sentence[len-i-1]){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("The sentence is palindorm");
        }else{
            printf("The sentence is not palindorm");
        }
        
        
    }