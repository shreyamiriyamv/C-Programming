#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        printf("You are a senior citizen.\n");
    }
    else if (age >= 18) {
        printf("You are an adult.\n");
    }
    else {
        printf("You are a child.\n");
    }

    bool isStudent = true;
    if (isStudent) {
        printf("You are a student.\n");
    }
    else {
        printf("You are not a student.\n");
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    char name[50];
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0) {
        printf("You did not enter your name.\n");
    }
    else {
        printf("Hello %s.\n", name);
    }

    return 0;

}