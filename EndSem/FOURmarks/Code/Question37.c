// Write a program to display information of 10 students using array of structure.
#include <stdio.h>

struct studentInfo {
    char name[50];
    int rollNo;
    float grade;
};

int main() {
    struct studentInfo students[10] = {
        {"Alice Smith", 101, 85.5},
        {"Bob Johnson", 102, 92.0},
        {"Charlie Brown", 103, 78.2},
        {"Diana Prince", 104, 95.1},
        {"Eve Adams", 105, 88.9},
        {"Frank White", 106, 75.0},
        {"Grace Lee", 107, 90.5},
        {"Harry Davis", 108, 81.3},
        {"Ivy Chen", 109, 93.7},
        {"Jack Wilson", 110, 80.0}
    };

    printf("%-50s %-15s %-10s\n\n", "Student Name", "Roll No", "Grade");

    for (int i = 0; i < 10; i++) {
        printf("%-50s %-15d %-10.2f\n",
               students[i].name,
               students[i].rollNo,
               students[i].grade);
    }

    return 0;
}
