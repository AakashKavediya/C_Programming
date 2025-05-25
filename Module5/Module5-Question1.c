// Define structure. Apply nested structure and write a program to print details of student with data members: Roll_number, Name, percentage and date of Birth. Apply nested structure for date of Birth of student.


#include <stdio.h>
#include <string.h>

struct Date{
    int date;
    int month;
    int year;
};

struct Student{
    char name[50];
    int roll;
    int percent;
    struct Date DoB;
};

int main(){
    int n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    struct Student student[n];
    for(int i = 0; i<n; i++){
        printf("For student %d: ", i+1);
        printf("Enter the name: ");
        scanf(" %s", student[i].name);
        printf("Enter the roll no.: ");
        scanf("%d", &student[i].roll);
        printf("Enter the percent: ");
        scanf("%d", &student[i].percent);
        printf("Enter date of birth: ");
        scanf("%d %d %d", &student[i].DoB.date,&student[i].DoB.month,&student[i].DoB.year);
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(student[j].roll>student[j+1].roll){
                struct Student temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp; 
            }
        }
    }

    for(int i= 0; i<n; i++){
        printf("%-20s %-5d %-5d %-5d %-5d %-5d\n",
            student[i].name,student[i].roll,student[i].percent,student[i].DoB.date,student[i].DoB.month,student[i].DoB.year
        );
    }
}