// 61. Write a program to display information of employees by using nested if else.
#include <stdio.h>

int main() {
    char name[50];
    int age;
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("\n--- Employee Info ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    // Nested if-else for displaying info based on salary
    if (salary > 50000) {
        if (age > 30) {
            printf("Designation: Senior Manager\n");
        } else {
            printf("Designation: Assistant Manager\n");
        }
    } else {
        if (salary > 30000) {
            if (age > 25) {
                printf("Designation: Executive\n");
            } else {
                printf("Designation: Junior Executive\n");
            }
        } else {
            if (age < 25) {
                printf("Designation: Intern\n");
            } else {
                printf("Designation: Trainee\n");
            }
        }
    }

    return 0;
}
