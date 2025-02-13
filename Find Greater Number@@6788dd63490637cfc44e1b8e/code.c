#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        printf("Odd", number);
    } else {
        printf("Even", number);
    }

    return 0;
}