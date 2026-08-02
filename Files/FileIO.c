#include <stdio.h>

int main() {

    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error Opening File.\n");
        return 1;
    }

    char text[] = "FANTASTIC FOUR - MARVEL'S FIRST FAMILY";

    fprintf(file, "%s\n", text);

    printf("File was written successfully!\n");

    fclose(file);
    return 0;
}