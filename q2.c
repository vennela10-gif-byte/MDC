#include <stdio.h>

int main() {
    int i, first = 1;

    for (i = 2000; i <= 3200; i++) {
        if (i % 7 == 0 && i % 3 != 0) {
            if (first == 0) {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }

    return 0;
}
