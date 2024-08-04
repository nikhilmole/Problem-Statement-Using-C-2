#include<stdio.h>
#include<stdbool.h>

int DisCharIndex(char *str, char ch)
{
    bool bFlag = false;
    int iCnt = 1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter character: ");
    scanf(" %c",&cValue);

    iRet = DisCharIndex(Arr,cValue);

    if(iRet == -1)
    {
        printf("There is no such letter: ");
    }
    else
    {
        printf("Letter occurs at the: %d\n",iRet);
    }

    return 0;
}