#include <stdio.h>

// Function to toggle the nth bit of a number
int toggleNthBit(int number, int n) {
    return number ^ (1 << n);
}

int main() {
    int number, n;
    // Input integers
    scanf("%d %d", &number,&n);
    // Toggle the nth bit
    int toggledNumber = toggleNthBit(number, n);

    // Output the result
    printf("%d", toggledNumber);