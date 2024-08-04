#include <stdio.h>
#include <stdbool.h>

bool CheckBits(unsigned int number, int pos1, int pos2) 
{
    unsigned int iMask1 = 1 << (pos1 - 1); 
    unsigned int iMask2 = 1 << (pos2 - 1); 

    if ((number & iMask1) || (number & iMask2)) 
    {
        return true; 
    } 
    else 
    {
        return false; 
    }
}

int main() 
{
    unsigned int value = 0;
    int pos1 = 0, pos2 = 0;

    printf("Enter a number: ");
    scanf("%u", &value);

    printf("Enter the first bit position: ");
    scanf("%d", &pos1);

    printf("Enter the second bit position: ");
    scanf("%d", &pos2);

    if (pos1 <= 0 || pos2 <= 0) 
    {
        printf("Bit positions must be positive integers.\n");
        return 1;
    }

    if (CheckBits(value, pos1, pos2)) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}
