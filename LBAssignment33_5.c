#include<stdio.h>

void Display(int iNo, char ch)
{
    static int i = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((i <= iNo) && (ch != '\0'))
    {
        printf("%c\t",ch);
        ch++;
        i++;
        Display(iNo,ch);
    }
}
int main()
{
    char CLet = '\0';
    int iValue = 0;

    printf("Enter charecter : ");
    scanf("%c",&CLet);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue,CLet);

    return 0;
}