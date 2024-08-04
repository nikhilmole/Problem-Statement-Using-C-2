#include<stdio.h>

int Display(int iNo)
{
    static int i = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(i <= iNo)
    {
        printf("%d\t",i);
        i++;
        Display(iNo);    
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}