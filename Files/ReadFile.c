#include <stdio.h>

int main() {

    FILE *new = fopen("input.txt", "r");

    char buffer[1024] = {0};

    if (new == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), new) != NULL) {
        printf("%s", buffer);
    }


    fclose(new);
    return 0;

}