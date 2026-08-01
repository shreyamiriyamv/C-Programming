#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h> // Required for time()

int main() {

    printf("%d\n", rand()); // rand() gives the same sequence of numbers each time you run the program

    srand(time(NULL));
    printf("%d\n", rand()); // To get a different number every time you run the program

    int min = 1, max = 100;
    int ranged_num = (rand() % (max - min + 1)) + min;
    printf("Random Number between %d and %d: %d\n", min, max, ranged_num);


    return 0;
}