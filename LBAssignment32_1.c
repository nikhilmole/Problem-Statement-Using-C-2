#include <stdio.h>

void Pattern(char *str)
{
    
    int i = 0;
    while(str[i] != '\0')
    {
        int j = 0;
        while(str[j] != '\0')
        {
            printf("%c\t", str[j]);
            j++;
        }
        i++;
        printf("\n");
    }
}


int main()
{
    char Arr[50];
    int iValue = 0;

    printf("Enter the string : ");
    scanf(" %[^'\n']s", Arr);

    Pattern(Arr);

    return 0;
}
