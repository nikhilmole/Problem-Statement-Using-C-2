#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    printf("Enter the charecter: ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == True)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital charecter\n");
    }

    return 0;
}