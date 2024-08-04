#include<stdio.h>

void StrNCat(char *src, char *dest, int iNo)
{
    while(*src != '\0')
    {
        src++;
    }
    src--;
    while((iNo > 0) && (*dest != '\0'))
    {
        *src = *dest;
        src++;
        dest++;
        iNo--;
    }
    *src = '\0'; 
}
int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;

    printf("Enter the first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string: \n");
    scanf(" %[^'\n']s",Brr);

    printf("Enter the numkber you want to concate the first letter in other string: \n");
    scanf("%d",&iValue);

    StrNCat(Arr,Brr,iValue);
    printf("%s",Arr);

    return 0;
}