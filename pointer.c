#include <stdio.h>

void birthday(int age);
void Birthday(int *age);

int main(void) {

    int age = 25;
    int *pAge = &age;

    printf("%p\n", &age);
    printf("%d\n", age);

    printf("%p\n", pAge);
    printf("%d\n", *pAge);

    printf("\n");

    birthday(age);

    printf("Age inside main: %d\n", age);

    printf("\n");

    Birthday(&age);

    printf("Age inside main: %d\n", age);

    return 0;
}

void birthday(int age) {
    age++;
    printf("Age inside function: %d\n", age);
}

void Birthday(int *age) {
    (*age)++;
    printf("Age inside pointer function: %d\n", *age);
}