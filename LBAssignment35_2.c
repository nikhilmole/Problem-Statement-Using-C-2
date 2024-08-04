#include<stdio.h>

int Display(int iNo)
{

    static int iSum = 0;
    int iDigit = 0;
    if(iNo > 0)
    {   
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        Display(iNo);
    }
    return iSum;
}
int main()
{   
    int iRet = 0;
    int iValue= 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Summation of %d is : %d",iValue,iRet);

    return 0;
}