#include <stdio.h>

int main() {
    int num, n;
    
    
    scanf("%d %d", &num,&n);
    
    
    
    // Calculate the mask to check the nth bit
    int mask = 1 << n;
    
    // Retrieve the value of the nth bit
    int nth_bit_value = (num & mask) >> n;
    
    printf("%d", n);
    
    return 0;
}
