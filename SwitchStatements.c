#include <stdio.h>

int main(void) {

    int dayOfWeek;
    printf("Enter a day of the week (1-7): ");
    scanf("%d",&dayOfWeek);

    switch(dayOfWeek) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("It is a weekday.\n");
            break;
        case 6:
        case 7:
            printf("It is a weekend.\n");
            break;
        default:
            printf("Invalid Day.");
    }

    return 0;
}
