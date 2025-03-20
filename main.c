#include <stdio.h>

int reverseNumber(int x, int *reversed) {
    *reversed = 0;
    int original = x;

    while (x > 0) {
        int digit = x % 10;
        *reversed = (*reversed * 10) + digit;
        x /= 10;
    }

    return original == *reversed;
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("false\n");
        printf("Reversed: Not applicable for negative numbers\n");
    } else {
        int isPalin = reverseNumber(num, &reversed);
        printf("Reversed: %d\n", reversed);

        if (isPalin) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }

    return 0;
}
