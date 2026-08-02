#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
    printf("Enter the number of prices: ");
    scanf("%d", &n);

    float *prices = malloc(n * sizeof(float));

    if(prices == NULL) {
        printf("Memory Allocation Failed.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%.2f ", prices[i]);
    }

    printf("\n");

    int newNumber;
    printf("Enter the new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL) {
        printf("Could not reallocate memory.\n");
    } else {
        prices = temp;
        temp = NULL;
    }

    for (int i = n; i < newNumber; i++) {
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%.2f ", prices[i]);
    }

    free(prices);
    prices = NULL;

    return 0;
}