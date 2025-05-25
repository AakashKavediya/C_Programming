// Write a program to display information of 10 books using array of structure.

#include <stdio.h>

struct bookInfo{
    char name[50];
    char Author[50];
    int price;
};

int main(){
    struct bookInfo collection[10] = {
        {"Zero to One", "Peter Thiel", 200},
        {"The Lean Startup", "Eric Ries", 180},
        {"Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 250},
        {"Thinking, Fast and Slow", "Daniel Kahneman", 220},
        {"Deep Work", "Cal Newport", 160},
        {"Atomic Habits", "James Clear", 190},
        {"The Power of Habit", "Charles Duhigg", 175},
        {"Good to Great", "Jim Collins", 210},
        {"The 7 Habits of Highly Effective People", "Stephen Covey", 195},
        {"Rich Dad Poor Dad", "Robert Kiyosaki", 150}
    };
    printf("%-50s %-50s %-20s\n\n","Book Name","Author Name","Price");
    for(int i = 0; i<10; i++){
    printf("%-50s %-50s %-20d\n", collection[i].name, collection[i].Author,collection[i].price);
        
    }
}