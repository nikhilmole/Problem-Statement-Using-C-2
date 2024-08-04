#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;

}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter number : ");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Number of white spaces : %d",iRet);

    return 0;
}