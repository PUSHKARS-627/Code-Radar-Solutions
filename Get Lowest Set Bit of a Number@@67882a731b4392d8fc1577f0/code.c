#include <stdio.h>
#include <math.h>

// Function to find position of lowest set bit
int findLowestSetBitPosition(int num) {
    if (num == 0)
        return 0; // No set bit found for 0

    return (int)(log2(num & -num)) + 1; // Calculate the position
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int position = findLowestSetBitPosition(number);

    if (position)
        printf("The position of the lowest set bit is: %d\n", position);
    else
        printf("No set bit found.\n");

    return 0;
}
