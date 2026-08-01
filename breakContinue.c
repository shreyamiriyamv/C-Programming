#include <stdio.h>
int main(void) {
    for (int i = 1; i < 10; i++) {
        if (i == 3) {
            continue;
        } else if (i == 8) {
            break;
        } else {
            printf("%d ", i);
        }

    }
    return 0;
}