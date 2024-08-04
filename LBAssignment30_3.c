#include<stdio.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL StrNCmpX(char *src, char *dest,int iNo)
{
    while((*src) && (*dest) && (iNo > 0))
    {
        if(*src != *dest)
        {
            return False;
        }
        src++;
        dest++;
        iNo--;
    }
    if(iNo == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;
    BOOL bRet = False;
    printf("Enter first string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the seond string: ");
    scanf(" %[^'\n']s",Brr);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = StrNCmpX(Arr,Brr,iValue);
    if(bRet == True)
    {
        printf("First %d character are same",iValue);
    }
    else
    {
        printf("First %d character are not same",iValue);
    }
    return 0;
}