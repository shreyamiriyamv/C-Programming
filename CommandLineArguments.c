#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Missing command line arguments.\n");
        return 1;
    }

    printf("Hello, %s\n", argv[1]);
    printf("Number of command-line arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);
    
    return 0;
}