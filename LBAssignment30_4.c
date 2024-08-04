#include <stdio.h>

void StrRevTogX(char *str) 
{
    char *first = str;
    char *last = str;
    char temp;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(last > first)
    {
        if(*first >= 'A' && *first <= 'Z')
        {
            *first = *first + 32;
        }
        else if(*first >= 'a' && *first <= 'z')
        {
            *first = *first - 32;
        }

        if(*last >= 'A' && *last <= 'Z')
        {
            *last = *last + 32;
        }
        else if(*last >= 'a' && *last <= 'z')
        {
            *last = *last -32;
        }
        temp = *last;
        *last = *first;
        *first = temp;
        
        first++;
        last--;
    }
}

int main() {
    char Arr[30];

    printf("Enter the string you want to reverse: ");
    scanf("%[^'\n']s", Arr); 

    StrRevTogX(Arr);

    printf("Reversed and toggled case string: %s\n", Arr);

    return 0;
}
