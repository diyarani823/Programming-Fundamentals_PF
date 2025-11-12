// employee_input.c
#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main() {
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name); // reads string with spaces

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Department: ");
    scanf(" %[^\n]", e.department);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Department: %s\n", e.department);

    return 0;
}

