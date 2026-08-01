#include <stdio.h>

int main(void) {
    int number = 0;
    while (number <= 0) {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
        while (getchar() != '\n');
    }

    printf("%d", number);
    return 0;
}