#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x = 25;
    
    printf("%f\n", sqrt(x)); // Square Root
    printf("%f\n", pow(x,2)); // Power
    printf("%f\n", pow(2,5));
    printf("%f\n", round(9.5678)); // Rounds to the nearest integer
    printf("%f\n", cbrt(216)); // Cube Root
    printf("%d\n", abs(-9)); // Returns absolute value of integer (Requires <stdlib.h>)
    printf("%f\n", ceil(9.5678)); // Rounds upwards
    printf("%f\n", floor(9.5678)); // Rounds downwards
    printf("%f\n", trunc(9.78738)); // Ignores decimal part
    printf("%f\n", exp(1));
    printf("%f\n", log10(100));
    printf("%f\n", log(2.718282));
    printf("%f\n", sin(3.14159));
    printf("%f\n", cos(0));
    printf("%f\n", tan(0.785398));
    printf("%f\n", asin(1));
    printf("%f\n", acos(0));
    printf("%f\n", atan(1));

    return 0;
}