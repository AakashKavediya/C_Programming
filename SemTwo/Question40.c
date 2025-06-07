// 40. Write a program to display information of 10 students using array of structure.
#include <stdio.h>

struct Student{
    char Name[25];
    char Branch[25];
    int marks;
};

int main(){
    struct Student students[10];
    for(int i = 0; i<10; i++){
        printf("Enter the name of the Student: ");
        scanf("%s", students[i].Name);
        printf("Enter the title of the Branch: ");
        scanf("%s", students[i].Branch);
        printf("Enter the marks of the student: ");
        scanf("%d", &students[i].marks);
    }
    printf("%-25s %-25s %-25s \n", "Name","Branch","Marks");
    printf("----------------------------------------------------------");
    for(int i = 0; i<10; i++){
        printf("%-25s %-25s %-25d \n",students[i].Name,students[i].Branch,students[i].marks );
    }
}