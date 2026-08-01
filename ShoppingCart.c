#include <stdio.h>

int main(void) {
    char item[30];
    float price;
    int quantity;
    char currency = '$';
    float total;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price of each?: ");
    scanf(" %f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s", quantity, item);
    printf("%c%.2f", currency, total);


    
}