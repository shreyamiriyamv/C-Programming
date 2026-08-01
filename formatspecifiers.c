#include <stdio.h>

int main(void) {
    int age = 24;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Natasha Romanoff";

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%.15lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);

    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%7.2f\n", price1);
    printf("%7.2f\n", price2);
    printf("%7.2f\n", price3);

    printf("%07.2f\n", price1);
    printf("%07.2f\n", price2);
    printf("%07.2f\n", price3);

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
    
    return 0;
}