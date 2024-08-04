#include<stdio.h>

void StrWrdRev(char *str)
{
    char *first = str;
    char *last = str;
    char temp = '\0';

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(last >= first)
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--; 
    }
}
int main()
{   
    char Arr[50];

    printf("Enter the string You want to reverse : ");
    scanf("%[^'\n']s",Arr);

    StrWrdRev(Arr);

    printf("%s",Arr);

    return 0;
}