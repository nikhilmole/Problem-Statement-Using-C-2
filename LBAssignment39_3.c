#include <stdio.h>
#include <stdbool.h>

bool CheckBits(unsigned int number) {
    
    unsigned int mask9 = 1 << 8;
    unsigned int mask12 = 1 << 11;

    if ((number & mask9) || (number & mask12)) 
    {
        return true; 
    } 
    else 
    {
        return false;
    }
}

int main() {
    unsigned int value = 0;
    bool result = 0;

    printf("Enter a number: ");
    scanf("%u", &value);

    result = CheckBits(value);

    if (result) 
    {
        printf("Either the 9th or the 12th bit (or both) is ON.\n");
    } 
    else 
    {
        printf("Neither the 9th nor the 12th bit is ON.\n");
    }

    return 0;
}
