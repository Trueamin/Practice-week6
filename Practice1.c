#include <stdio.h>

int main() {
    int number;
    int max = 0;

    printf("Enter numbers (enter 0 to finish):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number > max) {
            max = number;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
