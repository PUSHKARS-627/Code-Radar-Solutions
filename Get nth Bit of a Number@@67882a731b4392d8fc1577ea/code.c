#include <stdio.h>

int main() {
    int num, n, bit;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Input the position of the bit (0-based index)
    printf("Enter the position of the bit to retrieve: ");
    scanf("%d", &n);

    // Retrieve the nth bit
    bit = (num >> n) & 1;

    // Print the value of the nth bit
    printf("The value of bit %d is: %d\n", n, bit);

    return 0;
}
