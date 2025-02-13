#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int num_bits = sizeof(int) * CHAR_BIT; // Number of bits in an integer
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calculate the mask to check the MSB
    int msb_mask = 1 << (num_bits - 1);
    
    if (num & msb_mask) {
        printf("Set", num);
    } else {
        printf("Not Set", num);
    }
    
    return 0;
}
