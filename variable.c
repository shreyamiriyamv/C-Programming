#include <stdio.h>
#include <stdbool.h>
int main(void) {
    // variable - A reusable container for a value.
    //            Behaves as if it were the value it contains
    int age = 25;
    int year = 2026;
    int quantity = 1;
    printf("You are %d years old.\n", age);
    printf("The year is %d.\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 8.5;
    float price = 19.99;
    float temperature = -10.1;
    printf("Your gpa is %f.\n", gpa);
    printf("The price is %f.\n", price);
    printf("The temperature is %.1f.\n", temperature);


    double pi = 3.14159265358979;
    printf("The value of pi is %lf.\n", pi); //By default, only prints 6 decimal points
    printf("The value of pi is %.15lf.\n", pi);
    
    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    printf("Your grade is %c.\n", grade);
    printf("Your favourite symbol is %c.\n", symbol);
    printf("Your currency is %c.\n", currency);

    char name[] = "Shreya Miriyam Varghese";
    char email[] = "shreyamiriyamv@gmail.com";
    printf("Hello, my name is %s.\n", name);
    printf("Email: %s\n", email);

    bool isOnline = true;
    bool isFalse = false;
    printf("%d\n", isOnline);
    printf("%d\n", isFalse);
    if (isOnline) {
        printf("You are online.\n");
    }
    else {
        printf("You are offline.\n");
    }



    return 0;
}