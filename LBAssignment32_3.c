#include<stdio.h>

void Pattern(char *str) 
{
    int i = 0;

    while (str[i] != '\0') 
    {
        int j = 0;
        while (j <= i) 
        {
            printf("%c ", str[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    Pattern(Arr);

    return 0;
}