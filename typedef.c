#include <stdio.h>

typedef int Number;
typedef char* string;

int main(void) {

    int x = 8;
    printf("%d\n", x);

    Number y = 70;
    printf("%d\n", y);

    char *name1 = "Matt Murdock";
    printf("%s\n", name1);

    string name2 = "Natasha Romanoff";
    printf("%s\n", name2);


    return 0;
}