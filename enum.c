#include <stdio.h>

enum Day {
    Sunday, Monday, Tuesday, Wednesday, Thursday, 
    Friday, Saturday
};

typedef enum {
    January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, 
    July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
} Month;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status);

int main() {

    enum Day today = Monday;

    // printf("%s\n", today); - ERROR
    printf("%d\n", today);

    Month month= August;

    printf("%d\n", month);

    Status status = SUCCESS;
    connectStatus(status);


    return 0;
}

void connectStatus (Status status) {
    switch (status) {
        case SUCCESS:
            printf("Connection was successful.\n");
            break;
        case FAILURE:
            printf("Could not connect.\n");
            break;
        case PENDING:
            printf("Connecting...");
            break;
    }
}