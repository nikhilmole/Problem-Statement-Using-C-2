#include<stdio.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL StrPallindrome(char *str)
{
    char *end = str;
    char *start = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(end >= start)
    {
        if(*start >= 'A' && *start <= 'Z')
        {
            *start = *start + 32;
        }
        if(*end >= 'A' && *end <= 'Z')
        {
            *end = *end + 32;
        }
        if(*start != *end)
        {
            return False;
        }
        start++;
        end--;
    }
    return True;
}
int main()
{
    char Arr[30];
    BOOL bRet = False;

    printf("Enter the string You want to check string is palindrome or not : \n"); 
    scanf("%[^'\n']s",Arr);

    bRet = StrPallindrome(Arr);

    if(bRet == False)
    {
        printf("The string is not palindrome");
    }
    else
    {
        printf("The string is palindrome");
    }

    return 0;
}