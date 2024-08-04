#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter character: ");
    scanf(" %c", &cValue); 

    iRet = CountChar(Arr, cValue);
    printf("Frequency of %c character is: %d", cValue, iRet);

    return 0;
}
