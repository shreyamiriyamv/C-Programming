#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of grades: ");
    scanf("%d", &n);

    char *grades = malloc(n * sizeof(char));

    if (grades == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%c ", grades[i]);
    }
    
    free(grades);
    grades = NULL;

    return 0;
}