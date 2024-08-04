#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while (*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Infosystem ";
    char Brr[30] = "Logic Building";

    StrCatX(Arr, Brr);  

    printf("%s\n", Arr); 

    return 0;
}
