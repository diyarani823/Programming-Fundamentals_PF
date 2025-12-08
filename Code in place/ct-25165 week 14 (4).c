#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
    char department[30];
};

int main() {
    struct Employee emp[5];
    int i, maxIndex = 0;

    // Input for 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %[^\n]", emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("\n");
    }

    // Find employee with highest salary
    for (i = 1; i < 5; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Print
    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\n", emp[maxIndex].name);
    printf("ID: %d\n", emp[maxIndex].id);
    printf("Salary: %.2f\n", emp[maxIndex].salary);
    printf("Department: %s\n", emp[maxIndex].department);

    return 0;
}

