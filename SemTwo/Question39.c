// 39. Write a program to display information of 10 books using array of structure.
#include <stdio.h>

struct BookStore{
    char author[25];
    char title[25];
    int price;
};

int main(){
    struct BookStore books[10];
    for(int i = 0; i<10; i++){
        printf("Enter the name of the auther: ");
        scanf("%s", books[i].author);
        printf("Enter the title of the book: ");
        scanf("%s", books[i].title);
        printf("Enter the price of the book: ");
        scanf("%d", &books[i].price);
    }
    printf("%-25s %-25s %-25s \n", "Author","Title","Price");
    printf("----------------------------------------------------------");
    for(int i = 0; i<10; i++){
        printf("%-25s %-25s %-25d \n",books[i].author,books[i].title,books[i].price );
    }
}