#include <stdio.h>

unsigned int TurnOffBit(unsigned int number, int position) 
{
    unsigned int iMask = ~(1 << (position - 1)); 
    return number & iMask; 
}

int main() 
{
    unsigned int value;
    int position;
    unsigned int modifiedValue  = 0;
    printf("Enter a number: ");
    scanf("%u", &value);

    printf("Enter the bit position to turn off: ");
    scanf("%d", &position);

    if (position <= 0) 
    {
        printf("Bit position must be a positive integer.\n");
        return 1;
    }

    modifiedValue = TurnOffBit(value, position);
    printf("The modified number after turning off bit at position %d is: %u\n", position, modifiedValue);

    return 0;
}
