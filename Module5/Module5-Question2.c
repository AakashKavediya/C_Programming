// Write a program to read Title, author and price of 10 books using an array of structure and Display the record.

#include <stdio.h>
#include <string.h>

struct Record {
    char title[50];
    char name[50];
    int price;
};

int main(){
    struct Record record[10];    
    for(int i = 0; i<10; i++){
        printf("Enter the Title: ");
        scanf(" %s", record[i].title);
        printf("Enter the name of auther: ");
        scanf(" %s", record[i].name);
        printf("Enter the price: ");
        scanf("%d", &record[i].price);
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10-i-1; j++){
            if(record[j].price<record[j+1].price){
            struct Record temp = record[j];
            record[j] = record[j+1];
            record[j+1] = temp; 
            }
        }
    }

    printf("\n%-40s %-40s %-20s\n","Title","Author","Price");
    for(int i = 0; i<10; i++){
        printf("%-40s %-40s %-20d\n",record[i].title,record[i].name,record[i].price);
    }

}