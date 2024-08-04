#include<stdio.h>

int CountWS(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(*str == ' ')
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

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWS(Arr);

    printf("WHite spaces count in string is: %d",iRet);
    
    return 0;
}