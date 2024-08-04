#include<stdio.h>
void Display(char ch)
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        if(i == ch)
        {
            printf("ASCII value in decimal: %d\n",i);
            printf("ASCII value in hexa: %x\n",i);
            printf("ASCII value in octal: %o\n",i);
        }
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}