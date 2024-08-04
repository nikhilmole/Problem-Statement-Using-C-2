#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    int rmSpace = 0;

    while (*src != '\0')
    {
        if (*src == ' ')
        {
            if (!rmSpace)
            {
                *dest = ' '; 
                dest++;
                rmSpace = 1; 
            }
        }
        else
        {
            *dest = *src; 
            dest++;
            rmSpace = 0; 
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);
    printf("Extra white space remove string is : %s",Brr);

    return 0;
}