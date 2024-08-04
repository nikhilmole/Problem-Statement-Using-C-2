#include <stdio.h>
#include <stdlib.h>

void DisplayASCII()
{
    int iNum = 0;

    for(iNum = 0; iNum <= 255; iNum++ )
    {
        printf("%d = %c\n",iNum,(char)iNum);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
