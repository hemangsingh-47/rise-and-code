#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[20];
    struct Date ty; 
};

int main() {
    
    struct Employee h;

    printf("Enter Employee ID: ");
    scanf("%d", &h.id);

    printf("Enter Employee Name : ");
    scanf("%s", h.name);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &h.ty.day,&h.ty.month,&h.ty.year);

    printf("ID: %d\n", h.id);
    printf("Name: %s\n", h.name);
    printf("Joining Date: %d/%d/%d\n",h.ty.day,h.ty.month,h.ty.year);

    return 0;
}