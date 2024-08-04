#include<stdio.h>

void StrCpyX(char *scr, char *dest)
{
    while(*scr != '\0')
    {
        if(*scr != ' ')
        {
            *dest = *scr;
            dest++;
        }
        scr++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvel lous Pyth on";
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("%s",Brr);
    return 0;
}