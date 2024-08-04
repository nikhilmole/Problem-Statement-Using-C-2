#include<stdio.h>

void StrCpyRev(char *scr, char *dest)
{
    char *end = scr;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= scr)
    {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr,Brr);
    printf("%s",Brr);

    return 0;
}