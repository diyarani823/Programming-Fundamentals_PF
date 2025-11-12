#include <stdio.h>
#include <string.h>

#define STRLEN 100
#define NUM_COURSES 3

struct Address {
    char street[STRLEN];
    char city[STRLEN];
    char state[STRLEN];
    char zip[STRLEN];
};

struct Course {
    char name[STRLEN];
    double gpa;
};

struct Student {
    double cgpa;
    struct Course courses[NUM_COURSES];
    struct Address address;
};

static void read_line(const char *prompt, char *buf, size_t n) {
    printf("%s", prompt);
    fgets(buf, n, stdin);
    buf[strcspn(buf, "\n")] = '\0';
}

static void input_student(struct Student *s, int idx) {
    printf("\n--- Enter data for Student %d ---\n", idx);
    for (int i = 0; i < NUM_COURSES; ++i) {
        read_line("Course name: ", s->courses[i].name, sizeof s->courses[i].name);
        printf("GPA for %s: ", s->courses[i].name);
        scanf("%lf", &s->courses[i].gpa);
        getchar();
    }
    printf("Overall CGPA: ");
    scanf("%lf", &s->cgpa);
    getchar();

    puts("\nAddress:");
    read_line("  Street: ", s->address.street, sizeof s->address.street);
    read_line("  City  : ", s->address.city, sizeof s->address.city);
    read_line("  State : ", s->address.state, sizeof s->address.state);
    read_line("  ZIP   : ", s->address.zip, sizeof s->address.zip);
}

int main(void) {
    struct Student s1, s2;

    input_student(&s1, 1);
    input_student(&s2, 2);

    printf("\n--- Course-wise higher GPA (matching names) ---\n");
    for (int i = 0; i < NUM_COURSES; ++i) {
        for (int j = 0; j < NUM_COURSES; ++j) {
            if (strcmp(s1.courses[i].name, s2.courses[j].name) == 0) {
                double a = s1.courses[i].gpa, b = s2.courses[j].gpa;
                printf("Course: %s -> ", s1.courses[i].name);
                if (a > b)      printf("Student 1 higher (%.2f vs %.2f)\n", a, b);
                else if (b > a) printf("Student 2 higher (%.2f vs %.2f)\n", b, a);
                else            printf("Tie (%.2f)\n", a);
            }
        }
    }

    printf("\n--- Highest CGPA ---\n");
    if (s1.cgpa > s2.cgpa)
        printf("Student 1 has higher CGPA: %.2f vs %.2f\n", s1.cgpa, s2.cgpa);
    else if (s2.cgpa > s1.cgpa)
        printf("Student 2 has higher CGPA: %.2f vs %.2f\n", s2.cgpa, s1.cgpa);
    else
        printf("Both students have equal CGPA: %.2f\n", s1.cgpa);

    return 0;
}

