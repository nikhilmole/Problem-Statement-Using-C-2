#include<stdio.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL StrCpmX(char *src, char *dest)
{
    while (*src != '\0' && *dest != '\0')
    {
        if (*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src == '\0') && (*dest == '\0'))
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    BOOL bRet = False;

    printf("Enter first string : ");
    scanf("%[^'\n']s",Arr);
    printf("Enter second string : ");
    scanf(" %[^'\n']s",Brr);

    bRet = StrCpmX(Arr,Brr);
    if(bRet == True)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}