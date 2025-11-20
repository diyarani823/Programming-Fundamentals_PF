#include<stdio.h>

struct student{
    char name[10];
    int rollnum;
    float marks;
};

int main()
{
    struct student s1 = {"Diya", 25165, 99.9};
    struct student s2 = {"Mishal", 25156, 99.9};
    struct student s3 = {"Zainab", 25257, 74.1};

    printf("Student 1: Name: %s, Roll No: %d, Marks: %.2f\n", s1.name, s1.rollnum, s1.marks);
    printf("Student 2: Name: %s, Roll No: %d, Marks: %.2f\n", s2.name, s2.rollnum, s2.marks);
    printf("Student 3: Name: %s, Roll No: %d, Marks: %.2f\n", s3.name, s3.rollnum, s3.marks);

    return 0;
}

