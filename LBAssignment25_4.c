#include<stdio.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
        (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return 1;
        }
        str++;
    }
    return 0; 
}

int main()
{
    char Arr[20];
    BOOL bRet = False;

    printf("Enter string: ");
    scanf("%[^\n]", Arr);

    bRet = ChkVowel(Arr);

    if(bRet == True)
    {
        printf("Contains vowels\n");
    }
    else
    {
        printf("There are no vowels\n");
    }
    return 0;
}
