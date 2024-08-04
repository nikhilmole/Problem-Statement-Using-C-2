#include<stdio.h>

void Pattern(char *str) 
{
    int len = 0;
    while (str[len] != '\0') 
    {
        len++; 
    }
    
    while (len > 0) 
    {
        int j = 0;
        while (j < len) 
        {
            printf("%c ", str[j]);
            j++;
        }
        printf("\n");
        len--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    Pattern(Arr);

    return 0;
}