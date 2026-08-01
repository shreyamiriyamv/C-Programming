#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
} Car;

int main(void) {

    Car cars[] = {{"Mustang", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};
    printf("%d\n", sizeof(cars[2]));

    for (int i = 0, n = sizeof(cars)/sizeof(cars[0]); i < n; i++) {
        printf("%s ", cars[i].model);
        printf("%d ", cars[i].year);
        printf("$%d\n", cars[i].price);
    }

    return 0;
}