#include<stdio.h>

unsigned int OffBit(int iNo)
{
    unsigned int iMask = 0xFFFFFFBF;
    unsigned iResult = 0;

    iResult = iNo & iMask;

    return iResult;  
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);
    printf("Modified number is : %u",iRet);

    return 0;
}