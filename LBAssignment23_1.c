#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main ()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter the character :");
    scanf("%c",&cValue);


    bRet = ChkAlpha(cValue);

    if(bRet == True)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}