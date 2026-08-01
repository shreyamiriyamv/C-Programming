#include <stdio.h>

int main(void) {
    int numbers[] = {10,20,30,40,50};
    char grades[] = {'A','B','C','D','E','F'};
    char name[] = "Natasha Romanoff";

    // printf("%d", numbers); // Gives the address of the array
    printf("%d\n", *numbers);
    printf("%d\n", *(numbers+1));

    for (int i = 0, n = sizeof(numbers)/sizeof(numbers[0]); i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    for (int i = 0, n = sizeof(grades)/sizeof(grades[0]); i < n; i++) {
        printf("%c ", grades[i]);
    }

    printf("\n");

    for (int i = 0, n = sizeof(name)/sizeof(name[0]); i < n; i++) {
        printf("%c ", name[i]);
    }

    printf("\n");
    
    printf("%d ", name[16]);

    return 0;
}