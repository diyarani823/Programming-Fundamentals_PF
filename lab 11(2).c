#include <stdio.h>

struct student {
    char name[10];
    int rollnum;
    float marks;
};

int main()
{
    struct student s1, s2, s3;
    printf("Enter name of student 1: ");
    scanf("%s", s1.name);
    printf("Enter roll number of student 1: ");
    scanf("%d", &s1.rollnum);
    printf("Enter marks of student 1: ");
    scanf("%f", &s1.marks);
    printf("Enter name of student 2: ");
    scanf("%s", s2.name);
    printf("Enter roll number of student 2: ");
    scanf("%d", &s2.rollnum);
    printf("Enter marks of student 2: ");
    scanf("%f", &s2.marks);
    printf("Enter name of student 3: ");
    scanf("%s", s3.name);
    printf("Enter roll number of student 3: ");
    scanf("%d", &s3.rollnum);
    printf("Enter marks of student 3: ");
    scanf("%f", &s3.marks);
 printf("\n--- Student Information ---\n");
    printf("Student 1: Name: %s, Roll No: %d, Marks: %.2f\n", s1.name, s1.rollnum, s1.marks);
    printf("Student 2: Name: %s, Roll No: %d, Marks: %.2f\n", s2.name, s2.rollnum, s2.marks);
    printf("Student 3: Name: %s, Roll No: %d, Marks: %.2f\n", s3.name, s3.rollnum, s3.marks);
    return 0;
}

