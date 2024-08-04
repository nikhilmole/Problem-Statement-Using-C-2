#include<stdio.h>

void DisRev(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[40];

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    DisRev(Arr);
    printf("Reverse string is: %s",Arr);

    return 0;
}
