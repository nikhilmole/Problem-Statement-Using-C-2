#include<stdio.h>


int SmallDig(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9; 

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        iDigit++;
        SmallDig(iNo) ;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SmallDig(iValue);
    printf("Smallest digit : %d\n", iRet);

    return 0;
}
