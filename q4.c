#include <stdio.h>

int main() {
    int n, i;
     
    printf("Enter any integer : ");
    scanf("%d", &n);

    printf("{");

    for (i = 1; i <= n; i++) {
        printf("%d: %d", i, i * i);

        if (i < n) {
            printf(", ");
        }
    }

    printf("}");

    return 0;
}
