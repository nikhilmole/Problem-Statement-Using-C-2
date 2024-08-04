#include <stdio.h>
#include <stdbool.h>

bool CheckBit(unsigned int number, int position) 
{
    unsigned int mask = 1 << (position - 1); 
    return (number & mask) != 0; 
}

int main() 
{
    unsigned int value = 0;
    int position;

    printf("Enter a number: ");
    scanf("%u", &value);

    printf("Enter the bit position to check: ");
    scanf("%d", &position);

    if (position <= 0) {
        printf("Bit position must be a positive integer.\n");
        return 1;
    }

    if (CheckBit(value, position)) 
    {
        printf("The bit at position %d is ON.\n", position);
    } 
    else 
    {
        printf("The bit at position %d is OFF.\n", position);
    }

    return 0;
}
