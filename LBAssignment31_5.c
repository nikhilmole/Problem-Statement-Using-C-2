#include<stdio.h>

void StrCpyX(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while(*str == ' ') && (*str != '\0')
            {
                if(*str >= 'A' && *str <= 'Z')
                {
                    *str = *str + 32;
                }
            }
        }
    }
}
int main()
{
    char Arr[50]

    printf("Enter the string");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr);
    print("%s",Arr);

    return 0;
}