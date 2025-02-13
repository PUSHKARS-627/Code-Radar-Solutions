#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        printf("Even", number);
    } else {
        printf("Odd", number);
    }

    return 0;
}
