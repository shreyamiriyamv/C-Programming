#include <stdio.h>
#include <unistd.h>

int main(void) {
    // for(Initialization; Condition; Updation)

    for (int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    for (int i = 10; i >= 0; i--){
        sleep(1);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}