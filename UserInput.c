#include <stdio.h>
#include <string.h>

int main(void) {
    int age;
    float gpa;
    double percentage;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your percentage: ");
    scanf("%lf", &percentage);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your name: ");
    scanf("%s", name); // Only stores string till the first whitespace


    printf("My name is %s. I am %d years old.\n", name, age);
    printf("My gpa is %f\n", gpa);
    printf("My percentage is %lf\n", percentage);
    printf("MY grade is %c.\n", grade);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); 

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("My name is %s. \n", name);


    name[strlen(name) - 1] = '\0';
    printf("My name is %s. \n", name);


}   