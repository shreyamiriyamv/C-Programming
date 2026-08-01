#include <stdio.h>
int main() {
    int numbers[][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    for (int i = 0, n = sizeof(numbers)/sizeof(numbers[0]); i < n; i++) { //rows
        for (int j = 0, m = sizeof(numbers[i])/sizeof(numbers[i][0]); j < m; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}