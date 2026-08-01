#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent (Student student);

int main(void) {
    // struct Student student1 = {"Steve", 25, 8.5, true};
    Student student1 = {"Steve", 25, 8.5, true};
    Student student2 = {"Matt", 21, 9, false};
    Student student3 = {"Natasha", 23, 8.7, true};
    Student student4 = {};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    printf("\n");

    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No");

    printf("\n");

    printStudent(student3);

    printf("\n");

    strcpy(student4.name, "Susan");
    student4.age = 28;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student4);


    return 0;
}

void printStudent (Student student) {
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime) ? "Yes" : "No");


}
