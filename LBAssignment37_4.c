#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 448;

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
        printf("7th, 8th & 9th biit is ON\n");
    }
    else
    {
        printf("7th, 8th & 9th biit is OFF\n");
    }

    return 0;
}