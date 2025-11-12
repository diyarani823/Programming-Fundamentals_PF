// employee.c
#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main() {
    struct employee e1 = {101, "John Doe", 55000.75, "Finance"};

    printf("Employee Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Department: %s\n", e1.department);

    return 0;
}

