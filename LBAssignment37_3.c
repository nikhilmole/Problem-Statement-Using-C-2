#include <stdio.h>
#include <stdbool.h>

bool ChkBit(int iNo) 
{
    unsigned int iMask = 135282752; 
    unsigned int iResult = iNo & iMask;
    
    if (iResult == iMask) 
    {
        return true;
    } else 
    {
        return false;
    }
}

int main() {
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == true) {
        printf("7th, 15th, 21st, and 28th bits are ON\n");
    } else {
        printf("7th, 15th, 21st, and 28th bits are OFF\n");
    }

    return 0;
}
