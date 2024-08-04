#include<stdio.h>

int Diff(char *str)
{
    int CapCount = 0;
    int SmaCount = 0;
    int Ans = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            CapCount++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            SmaCount++;
        }
        str++;
    }
    Ans = SmaCount - CapCount;
    return Ans;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']", Arr);

    iRet = Diff(Arr);

    printf("Difference between capital and small letters is: %d\n", iRet);

    return 0;
}
