#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMult = iMult * iDigit;
        Mult(iNo);
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product of digits %d : %d",iValue,iRet);

    return 0; 

}