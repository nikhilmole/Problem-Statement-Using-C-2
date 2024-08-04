#include<stdio.h>

unsigned int ToggleBit(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0x00000040;

    iResult = iNo ^ iMask;

    return iResult;

}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);
    printf("Modified number is : %u",iRet);

    return 0;
}