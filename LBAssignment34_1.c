#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(i <= iNo)
    {
        printf("*\t",i);
        i++;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}