#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int x;
    int y;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    int max = (x > y) ? x : y;

    printf("%d\n", max);

    bool isOnline = true;
    printf("%s\n", (isOnline) ? "Online" : "Offline");

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("%d is an %s.\n", number, (number % 2 == 0) ? "Even Number" : "Odd Number");

    int hours = 12;
    int minutes = 30;
    char *meridiem = (hours <12) ? "AM" : "PM";

    printf("%02d:%02d %s\n", hours, minutes, meridiem);

    return 0;

}