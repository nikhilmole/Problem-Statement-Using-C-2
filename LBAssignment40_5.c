#include <stdio.h>

unsigned int ToggleNibble(unsigned int nibble) 
{
    return ~nibble & 0x0F; 
}


unsigned int ToggleFirstAndLastNibbles(unsigned int number) 
{
    unsigned int firstNibble = (number >> 28) & 0x0F; 
    unsigned int lastNibble = number & 0x0F; 

    firstNibble = ToggleNibble(firstNibble);
    lastNibble = ToggleNibble(lastNibble);

   
    number &= 0x0FFFFFF0; 
    number &= 0xFFFFFFF0;

  
    number |= (firstNibble << 28); 
    number |= lastNibble;

    return number;
}

int main() 
{
    unsigned int value;

    printf("Enter a number (in decimal): ");
    scanf("%u", &value);

    unsigned int modifiedValue = ToggleFirstAndLastNibbles(value);
    printf("The modified number after toggling the first and last nibbles is: %u\n", modifiedValue);

    return 0;
}
