#include<stdio.h>

void Struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        printf("%c",*str);
        str++;
    }
}
int main()
{
    char Arr [20];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    Struprx(Arr);

    return 0;
}