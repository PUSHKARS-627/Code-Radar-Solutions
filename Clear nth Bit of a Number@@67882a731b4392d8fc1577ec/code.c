#include <stdio.h>

int main() {
    int num, n;

    // Input an integer

    scanf("%d", &num);

    // Input the position of the bit to clear (0-based index)

    scanf("%d", &n);

    // Clear the nth bit
    num &= ~(1 << n);

    // Print the result
    printf("%d",num);

    return 0;
}