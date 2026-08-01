#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int square(int num) {
    int result = num * num;
    return result;
}

double cube(double num) {
    return pow(num,3);
}

bool ageCheck(int age) {
    if (age >= 18) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {
    int x = square(5);
    int y = square(7);
    int z = square(10);

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);

    float a = cube(2);
    printf("%f\n", a);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (ageCheck(age)) {
        printf("You may sign up.\n");
    } else {
        printf ("You must be 18+ to sign up.\n");
    }

    return 0;
}