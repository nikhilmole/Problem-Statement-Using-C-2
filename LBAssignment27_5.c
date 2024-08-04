#include<stdio.h>

void StrRev(char *str)
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
    char Arr[50];
    char cValue = '\0';

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    StrRev(Arr);

    printf("Reverse string is: %s",Arr);

    return 0;
}