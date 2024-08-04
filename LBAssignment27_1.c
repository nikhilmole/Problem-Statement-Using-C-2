#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0') 
    {
        if(*str == ch) 
        {
            return True; 
        }
        str++;
    }
    return False; 
}

int main()
{
    char Arr[20];
    BOOL bRet = False; 
    char cValue = '\0';

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr); 

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == True)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}
