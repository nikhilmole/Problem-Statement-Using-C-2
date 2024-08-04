#include <stdio.h>

unsigned int ToggleBit(unsigned int iNo) 
{
    unsigned int iMask = 0x00000240;

    unsigned int iResult = iNo ^ iMask;

    return iResult;
}

int main() 
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);
    printf("Modified number is: %u\n", iRet);

    return 0;
}
