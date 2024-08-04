#include<stdio.h>

int Fact(int iNo)
{
    static int iFac = 1;
    static int i = 1;
    if(i <= iNo)
    {
        iFac = (iFac * i);
        i++;
        Fact(iNo); 
    }
    return iFac;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial %d is : %d",iValue,iRet);

    return 0;
}