// Write a program to read name, id, salary, date of joining using nested structure to get the address of an employee.
#include <stdio.h>
#include <string.h>
struct address
{
    int flatNo;
    char city[50];
    char district[50];
    char state[50];
};
struct employ
{
    char name[50];
    int id;
    int salary;
    int date;
    struct address completeAddress;    
};

int main(){
    int n;
    printf("Enter the number of the employ: ");
    scanf("%d", &n);
    struct employ Employs[n];
    for(int i = 0; i < n; i++){
        printf("For Employ %d", i+1);
        printf("Enter the name of the employ: ");
        scanf("%s", Employs[i].name);
        printf("Enter the ID of the employ: ");
        scanf("%d", &Employs[i].id);
        printf("Enter the salary of the employ: ");
        scanf("%d", &Employs[i].salary);
        printf("Enter date: ");
        scanf("%d", &Employs[i].date);
        printf("Enter your flat no: ");
        scanf("%d", &Employs[i].completeAddress.flatNo);
        printf("Enter your city: ");
        scanf("%s", Employs[i].completeAddress.city);
        printf("Enter your district: ");
        scanf("%s", Employs[i].completeAddress.district);
        printf("Enter your state: ");
        scanf("%s",Employs[i].completeAddress.state);
    }

    printf("%-50s %-10s %-10s %-10s %-100s \n", "Name", "ID", "Salary", "Date", "Address");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    for(int i = 0; i< n; i++){
        printf("%-50s %-10d %-10d %-10d %-20d %-20s %-20s %-20s\n",Employs[i].name,Employs[i].id,Employs[i].salary, Employs[i].date, Employs[i].completeAddress.flatNo,Employs[i].completeAddress.city, Employs[i].completeAddress.district, Employs[i].completeAddress.state );
    }
}