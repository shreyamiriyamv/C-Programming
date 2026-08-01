#include <stdio.h>
int main(void) {
    int x = 5;
    int y = 2;
    int z;

    z = x + y;
    printf("%d\n", z);
    z = x - y;
    printf("%d\n", z);
    z = x * y;
    printf("%d\n", z);
    z = x / y;
    printf("%d\n", z);

    z = x % y;
    printf("%d\n", z);


    printf("%d\n", z++);
    printf("%d\n", z);
    printf("%d\n", ++z);

    float a = x/y;
    printf("%f\n", a);
    printf("%f\n", (float)x/y);
    printf("%f\n", x/(float)y);

    x += 2;
    printf("%d\n", x);
    x -= 2;
    printf("%d\n", x);
    x *= 2;
    printf("%d\n", x);
    x /= 2;
    printf("%d\n", x);
    x %= 2;
    printf("%d\n", x);



    return 0;
}