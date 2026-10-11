#include <stdio.h>
#include <string.h>



int main() {
    char str[100];
    int i, j, count, found = 0;
    
    printf("Enter any string : ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count = 0;

        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("No unique character\n");
    }

    return 0;
}
