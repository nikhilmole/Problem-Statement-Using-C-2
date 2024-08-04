#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask =  2147483649;

    iResult = iNo & iMask;

    if(iMask == iResult)
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

    printf("Enter number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("1st & 32 bit is ON\n");
    }
    else
    {
        printf("1st & 32 bit is OFF\n");
    }

    return 0;
}