#include<stdio.h>

void Strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else
        {
            *str = *str - 32;
        }
        printf("%c",*str);
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter strung: ");
    scanf("%[^'\n']s",Arr);

    Strtogglex(Arr);

    return 0;
}