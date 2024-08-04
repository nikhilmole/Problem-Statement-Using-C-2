#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
    scanf("%c", &cValue); 

    bRet = ChkDigit(cValue);

    if(bRet == True)
    {
        printf("It is a digit\n");
    }
    else 
    {
        printf("It is not a digit\n");
    }

    return 0;
}
