#include<stdio.h>

int SmallCount(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        SmallCount(str);
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = SmallCount(Arr);
    printf("Number of small capital : %d",iRet);

    return 0;
}