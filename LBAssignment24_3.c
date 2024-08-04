#include<stdio.h>

void Display(char Ch)
{
    int i = 0;

    if (Ch >= 'A' && Ch <= 'Z')
    {
        for(i = Ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        for(i = Ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        printf("Invalid input");
    }
}
int main()
{
    char cValue = '\0';

    printf("enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}