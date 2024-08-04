#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        *src++;
        *dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpyCap(Arr,Brr);
    printf("%s",Brr);

    return 0;
}