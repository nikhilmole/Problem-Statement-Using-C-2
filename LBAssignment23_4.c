#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch > 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == True)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small character");
    }
    return 0;
}