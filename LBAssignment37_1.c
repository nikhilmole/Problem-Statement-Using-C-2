#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    unsigned int iMask = 16384;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is off\n");
    }
    return 0;
}