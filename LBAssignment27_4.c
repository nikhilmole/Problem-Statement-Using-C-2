#include<stdio.h>

int LastOcc(char *str, char ch)
{
    int iCnt = 1;
    int iPose = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPose = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPose;
}

int main()
{
    int iRet = 0;
    char cValue = '\0';
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", Arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    iRet = LastOcc(Arr, cValue);
    if(iRet == -1)
    {
        printf("There is no such letter: ");
    }
    else
    {
        printf("Last occurance of letter is: %d\n",iRet);
    }

    return 0;
}
