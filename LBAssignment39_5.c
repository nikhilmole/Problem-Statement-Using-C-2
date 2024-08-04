#include <stdio.h>

unsigned int ToggleBitsInRange(unsigned int number, int start, int end) {
    unsigned int iMask = 0;

    for (int i = start; i <= end; i++) 
    {
        iMask |= (1 << (i - 1));
    }

    return number ^ iMask;
}

int main()
{
    unsigned int value = 0;
    int start = 0, end = 0;

    printf("Enter a number: ");
    scanf("%u", &value);

    printf("Enter the start position: ");
    scanf("%d", &start);

    printf("Enter the end position: ");
    scanf("%d", &end);

    if (start <= 0 || end <= 0 || start > end) 
    {
        printf("Invalid positions. Ensure positions are positive and start <= end.\n");
        return 1;
    }

    unsigned int result = ToggleBitsInRange(value, start, end);
    printf("The number after toggling bits from position %d to %d is: %u\n", start, end, result);

    return 0;
}
