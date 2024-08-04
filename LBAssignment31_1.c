#include<stdio.h>

int WorldCount(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = WorldCount(Arr);

    printf("The number of capital letters are : %d",iRet);

    return 0;
}