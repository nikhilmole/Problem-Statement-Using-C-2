#include <stdio.h>

// Function to turn on the last 4 bits of a number
unsigned int OnLastFourBits(unsigned int number) {
    unsigned int iMask = 0x0F; // Mask with the last 4 bits set to 1 (0x0F)
    return number | iMask; // Turn on the last 4 bits by performing OR with the mask
}

int main() {
    unsigned int value;

    printf("Enter a number (in decimal): ");
    scanf("%u", &value);

    unsigned int modifiedValue = OnLastFourBits(value);
    printf("The modified number after turning on the last 4 bits is: %u\n", modifiedValue);

    return 0;
}
