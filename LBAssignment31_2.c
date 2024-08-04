#include<stdio.h>

int WordCount(char *str)
{
    int iMax = 0;

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while((*str == ' ') && (*str != '\0'))
            {
                str++;
            }
        }
        else
        {
            iMax++;
        }
    }
    return iMax;
}
int main()
{   
    char Arr[50];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%s[^'\n']",Arr);

    iRet = WordCount(Arr);

    printf("Max word count is : %d",iRet);

    return 0;
}